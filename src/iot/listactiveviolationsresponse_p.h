// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVEVIOLATIONSRESPONSE_P_H
#define QTAWS_LISTACTIVEVIOLATIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListActiveViolationsResponse;

class ListActiveViolationsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListActiveViolationsResponsePrivate(ListActiveViolationsResponse * const q);

    void parseListActiveViolationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListActiveViolationsResponse)
    Q_DISABLE_COPY(ListActiveViolationsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
