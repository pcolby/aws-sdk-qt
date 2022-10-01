// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHDOMAINRESPONSE_P_H
#define QTAWS_CLOUDSEARCHDOMAINRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudSearchDomain {

class CloudSearchDomainResponse;

class CloudSearchDomainResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudSearchDomainResponsePrivate(CloudSearchDomainResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudSearchDomainResponse)
    Q_DISABLE_COPY(CloudSearchDomainResponsePrivate)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
