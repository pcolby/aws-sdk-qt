// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICKEYRESPONSE_P_H
#define QTAWS_DELETEPUBLICKEYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeletePublicKeyResponse;

class DeletePublicKeyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeletePublicKeyResponsePrivate(DeletePublicKeyResponse * const q);

    void parseDeletePublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePublicKeyResponse)
    Q_DISABLE_COPY(DeletePublicKeyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
