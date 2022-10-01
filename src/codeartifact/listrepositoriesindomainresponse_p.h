// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESINDOMAINRESPONSE_P_H
#define QTAWS_LISTREPOSITORIESINDOMAINRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class ListRepositoriesInDomainResponse;

class ListRepositoriesInDomainResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit ListRepositoriesInDomainResponsePrivate(ListRepositoriesInDomainResponse * const q);

    void parseListRepositoriesInDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRepositoriesInDomainResponse)
    Q_DISABLE_COPY(ListRepositoriesInDomainResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
