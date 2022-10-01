// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINACCESSCONTROLRESPONSE_P_H
#define QTAWS_GETORIGINACCESSCONTROLRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetOriginAccessControlResponse;

class GetOriginAccessControlResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetOriginAccessControlResponsePrivate(GetOriginAccessControlResponse * const q);

    void parseGetOriginAccessControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOriginAccessControlResponse)
    Q_DISABLE_COPY(GetOriginAccessControlResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
