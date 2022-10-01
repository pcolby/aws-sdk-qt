// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICKEYCONFIGRESPONSE_H
#define QTAWS_GETPUBLICKEYCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getpublickeyconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetPublicKeyConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetPublicKeyConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetPublicKeyConfigResponse(const GetPublicKeyConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPublicKeyConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPublicKeyConfigResponse)
    Q_DISABLE_COPY(GetPublicKeyConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
