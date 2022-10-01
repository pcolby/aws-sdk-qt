// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "describedomainrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribeDomainRequest;

class DescribeDomainRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DescribeDomainRequestPrivate(const CodeArtifactRequest::Action action,
                                   DescribeDomainRequest * const q);
    DescribeDomainRequestPrivate(const DescribeDomainRequestPrivate &other,
                                   DescribeDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
