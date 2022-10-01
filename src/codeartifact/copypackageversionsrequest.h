// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPACKAGEVERSIONSREQUEST_H
#define QTAWS_COPYPACKAGEVERSIONSREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class CopyPackageVersionsRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT CopyPackageVersionsRequest : public CodeArtifactRequest {

public:
    CopyPackageVersionsRequest(const CopyPackageVersionsRequest &other);
    CopyPackageVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyPackageVersionsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
