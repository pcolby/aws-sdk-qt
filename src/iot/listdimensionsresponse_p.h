// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDIMENSIONSRESPONSE_P_H
#define QTAWS_LISTDIMENSIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListDimensionsResponse;

class ListDimensionsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListDimensionsResponsePrivate(ListDimensionsResponse * const q);

    void parseListDimensionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDimensionsResponse)
    Q_DISABLE_COPY(ListDimensionsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
