// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICKEYRESPONSE_P_H
#define QTAWS_CREATEPUBLICKEYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreatePublicKeyResponse;

class CreatePublicKeyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreatePublicKeyResponsePrivate(CreatePublicKeyResponse * const q);

    void parseCreatePublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePublicKeyResponse)
    Q_DISABLE_COPY(CreatePublicKeyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
