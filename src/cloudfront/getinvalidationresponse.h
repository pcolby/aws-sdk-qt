// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVALIDATIONRESPONSE_H
#define QTAWS_GETINVALIDATIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "getinvalidationrequest.h"

namespace QtAws {
namespace CloudFront {

class GetInvalidationResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetInvalidationResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetInvalidationResponse(const GetInvalidationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInvalidationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInvalidationResponse)
    Q_DISABLE_COPY(GetInvalidationResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
