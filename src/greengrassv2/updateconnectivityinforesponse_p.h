// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIVITYINFORESPONSE_P_H
#define QTAWS_UPDATECONNECTIVITYINFORESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class UpdateConnectivityInfoResponse;

class UpdateConnectivityInfoResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit UpdateConnectivityInfoResponsePrivate(UpdateConnectivityInfoResponse * const q);

    void parseUpdateConnectivityInfoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectivityInfoResponse)
    Q_DISABLE_COPY(UpdateConnectivityInfoResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
