// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINRESPONSE_P_H
#define QTAWS_CREATEDOMAINRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class CreateDomainResponse;

class CreateDomainResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit CreateDomainResponsePrivate(CreateDomainResponse * const q);

    void parseCreateDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDomainResponse)
    Q_DISABLE_COPY(CreateDomainResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
