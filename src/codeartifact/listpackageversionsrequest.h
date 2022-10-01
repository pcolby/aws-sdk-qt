// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONSREQUEST_H
#define QTAWS_LISTPACKAGEVERSIONSREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionsRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT ListPackageVersionsRequest : public CodeArtifactRequest {

public:
    ListPackageVersionsRequest(const ListPackageVersionsRequest &other);
    ListPackageVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackageVersionsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
