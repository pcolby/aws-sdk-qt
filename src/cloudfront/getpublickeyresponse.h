// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICKEYRESPONSE_H
#define QTAWS_GETPUBLICKEYRESPONSE_H

#include "cloudfrontresponse.h"
#include "getpublickeyrequest.h"

namespace QtAws {
namespace CloudFront {

class GetPublicKeyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetPublicKeyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetPublicKeyResponse(const GetPublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPublicKeyResponse)
    Q_DISABLE_COPY(GetPublicKeyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
