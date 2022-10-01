// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIVITYINFORESPONSE_P_H
#define QTAWS_GETCONNECTIVITYINFORESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class GetConnectivityInfoResponse;

class GetConnectivityInfoResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit GetConnectivityInfoResponsePrivate(GetConnectivityInfoResponse * const q);

    void parseGetConnectivityInfoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectivityInfoResponse)
    Q_DISABLE_COPY(GetConnectivityInfoResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
