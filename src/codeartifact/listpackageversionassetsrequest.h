// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONASSETSREQUEST_H
#define QTAWS_LISTPACKAGEVERSIONASSETSREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionAssetsRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT ListPackageVersionAssetsRequest : public CodeArtifactRequest {

public:
    ListPackageVersionAssetsRequest(const ListPackageVersionAssetsRequest &other);
    ListPackageVersionAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackageVersionAssetsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
