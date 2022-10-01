// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESINDOMAINRESPONSE_H
#define QTAWS_LISTREPOSITORIESINDOMAINRESPONSE_H

#include "codeartifactresponse.h"
#include "listrepositoriesindomainrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListRepositoriesInDomainResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT ListRepositoriesInDomainResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    ListRepositoriesInDomainResponse(const ListRepositoriesInDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRepositoriesInDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositoriesInDomainResponse)
    Q_DISABLE_COPY(ListRepositoriesInDomainResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
