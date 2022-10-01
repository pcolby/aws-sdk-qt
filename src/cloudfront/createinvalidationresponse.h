// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINVALIDATIONRESPONSE_H
#define QTAWS_CREATEINVALIDATIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "createinvalidationrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateInvalidationResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateInvalidationResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateInvalidationResponse(const CreateInvalidationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInvalidationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInvalidationResponse)
    Q_DISABLE_COPY(CreateInvalidationResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
