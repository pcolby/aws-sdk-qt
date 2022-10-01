// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPOSITORYREQUEST_H
#define QTAWS_CREATEREPOSITORYREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class CreateRepositoryRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT CreateRepositoryRequest : public CodeArtifactRequest {

public:
    CreateRepositoryRequest(const CreateRepositoryRequest &other);
    CreateRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRepositoryRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
