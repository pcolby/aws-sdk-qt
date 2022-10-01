// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIVITYINFORESPONSE_P_H
#define QTAWS_UPDATECONNECTIVITYINFORESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateConnectivityInfoResponse;

class UpdateConnectivityInfoResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateConnectivityInfoResponsePrivate(UpdateConnectivityInfoResponse * const q);

    void parseUpdateConnectivityInfoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectivityInfoResponse)
    Q_DISABLE_COPY(UpdateConnectivityInfoResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
