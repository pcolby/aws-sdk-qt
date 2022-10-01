// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOTAUPDATESRESPONSE_P_H
#define QTAWS_LISTOTAUPDATESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListOTAUpdatesResponse;

class ListOTAUpdatesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListOTAUpdatesResponsePrivate(ListOTAUpdatesResponse * const q);

    void parseListOTAUpdatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOTAUpdatesResponse)
    Q_DISABLE_COPY(ListOTAUpdatesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
