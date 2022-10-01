// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESIGNEDDOMAINURLRESPONSE_H
#define QTAWS_CREATEPRESIGNEDDOMAINURLRESPONSE_H

#include "sagemakerresponse.h"
#include "createpresigneddomainurlrequest.h"

namespace QtAws {
namespace SageMaker {

class CreatePresignedDomainUrlResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreatePresignedDomainUrlResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreatePresignedDomainUrlResponse(const CreatePresignedDomainUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePresignedDomainUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePresignedDomainUrlResponse)
    Q_DISABLE_COPY(CreatePresignedDomainUrlResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
