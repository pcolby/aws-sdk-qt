// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESIGNEDDOMAINURLRESPONSE_P_H
#define QTAWS_CREATEPRESIGNEDDOMAINURLRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreatePresignedDomainUrlResponse;

class CreatePresignedDomainUrlResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreatePresignedDomainUrlResponsePrivate(CreatePresignedDomainUrlResponse * const q);

    void parseCreatePresignedDomainUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePresignedDomainUrlResponse)
    Q_DISABLE_COPY(CreatePresignedDomainUrlResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
