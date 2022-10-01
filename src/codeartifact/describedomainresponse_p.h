// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINRESPONSE_P_H
#define QTAWS_DESCRIBEDOMAINRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class DescribeDomainResponse;

class DescribeDomainResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit DescribeDomainResponsePrivate(DescribeDomainResponse * const q);

    void parseDescribeDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDomainResponse)
    Q_DISABLE_COPY(DescribeDomainResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
