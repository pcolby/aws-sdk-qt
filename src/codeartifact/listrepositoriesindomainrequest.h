// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESINDOMAINREQUEST_H
#define QTAWS_LISTREPOSITORIESINDOMAINREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListRepositoriesInDomainRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT ListRepositoriesInDomainRequest : public CodeArtifactRequest {

public:
    ListRepositoriesInDomainRequest(const ListRepositoriesInDomainRequest &other);
    ListRepositoriesInDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositoriesInDomainRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
