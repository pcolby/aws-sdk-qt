// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICKEYCONFIGRESPONSE_P_H
#define QTAWS_GETPUBLICKEYCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetPublicKeyConfigResponse;

class GetPublicKeyConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetPublicKeyConfigResponsePrivate(GetPublicKeyConfigResponse * const q);

    void parseGetPublicKeyConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPublicKeyConfigResponse)
    Q_DISABLE_COPY(GetPublicKeyConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
