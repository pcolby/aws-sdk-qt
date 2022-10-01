// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTALSRESPONSE_P_H
#define QTAWS_LISTPORTALSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListPortalsResponse;

class ListPortalsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListPortalsResponsePrivate(ListPortalsResponse * const q);

    void parseListPortalsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPortalsResponse)
    Q_DISABLE_COPY(ListPortalsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
