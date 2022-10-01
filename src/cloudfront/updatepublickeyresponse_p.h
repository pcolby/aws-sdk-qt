// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICKEYRESPONSE_P_H
#define QTAWS_UPDATEPUBLICKEYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdatePublicKeyResponse;

class UpdatePublicKeyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdatePublicKeyResponsePrivate(UpdatePublicKeyResponse * const q);

    void parseUpdatePublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePublicKeyResponse)
    Q_DISABLE_COPY(UpdatePublicKeyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
