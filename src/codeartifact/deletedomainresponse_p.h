// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINRESPONSE_P_H
#define QTAWS_DELETEDOMAINRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteDomainResponse;

class DeleteDomainResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit DeleteDomainResponsePrivate(DeleteDomainResponse * const q);

    void parseDeleteDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDomainResponse)
    Q_DISABLE_COPY(DeleteDomainResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
