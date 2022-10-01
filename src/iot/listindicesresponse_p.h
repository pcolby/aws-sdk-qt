// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINDICESRESPONSE_P_H
#define QTAWS_LISTINDICESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListIndicesResponse;

class ListIndicesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListIndicesResponsePrivate(ListIndicesResponse * const q);

    void parseListIndicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIndicesResponse)
    Q_DISABLE_COPY(ListIndicesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
