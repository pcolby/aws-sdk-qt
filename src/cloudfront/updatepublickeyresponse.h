// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICKEYRESPONSE_H
#define QTAWS_UPDATEPUBLICKEYRESPONSE_H

#include "cloudfrontresponse.h"
#include "updatepublickeyrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdatePublicKeyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdatePublicKeyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdatePublicKeyResponse(const UpdatePublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePublicKeyResponse)
    Q_DISABLE_COPY(UpdatePublicKeyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
