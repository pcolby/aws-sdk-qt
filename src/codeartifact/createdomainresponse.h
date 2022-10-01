// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINRESPONSE_H
#define QTAWS_CREATEDOMAINRESPONSE_H

#include "codeartifactresponse.h"
#include "createdomainrequest.h"

namespace QtAws {
namespace CodeArtifact {

class CreateDomainResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT CreateDomainResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    CreateDomainResponse(const CreateDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainResponse)
    Q_DISABLE_COPY(CreateDomainResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
