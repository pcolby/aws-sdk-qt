// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINACCESSCONTROLCONFIGRESPONSE_P_H
#define QTAWS_GETORIGINACCESSCONTROLCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetOriginAccessControlConfigResponse;

class GetOriginAccessControlConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetOriginAccessControlConfigResponsePrivate(GetOriginAccessControlConfigResponse * const q);

    void parseGetOriginAccessControlConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOriginAccessControlConfigResponse)
    Q_DISABLE_COPY(GetOriginAccessControlConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
