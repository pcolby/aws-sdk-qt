// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICKEYRESPONSE_H
#define QTAWS_CREATEPUBLICKEYRESPONSE_H

#include "cloudfrontresponse.h"
#include "createpublickeyrequest.h"

namespace QtAws {
namespace CloudFront {

class CreatePublicKeyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreatePublicKeyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreatePublicKeyResponse(const CreatePublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePublicKeyResponse)
    Q_DISABLE_COPY(CreatePublicKeyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
