// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGEVERSIONSREQUEST_H
#define QTAWS_DELETEPACKAGEVERSIONSREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeletePackageVersionsRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT DeletePackageVersionsRequest : public CodeArtifactRequest {

public:
    DeletePackageVersionsRequest(const DeletePackageVersionsRequest &other);
    DeletePackageVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePackageVersionsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
