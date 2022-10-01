// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYREQUEST_H
#define QTAWS_DELETEREPOSITORYREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteRepositoryRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT DeleteRepositoryRequest : public CodeArtifactRequest {

public:
    DeleteRepositoryRequest(const DeleteRepositoryRequest &other);
    DeleteRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRepositoryRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
