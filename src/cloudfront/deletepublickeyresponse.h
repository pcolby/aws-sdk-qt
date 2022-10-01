// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICKEYRESPONSE_H
#define QTAWS_DELETEPUBLICKEYRESPONSE_H

#include "cloudfrontresponse.h"
#include "deletepublickeyrequest.h"

namespace QtAws {
namespace CloudFront {

class DeletePublicKeyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeletePublicKeyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeletePublicKeyResponse(const DeletePublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePublicKeyResponse)
    Q_DISABLE_COPY(DeletePublicKeyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
