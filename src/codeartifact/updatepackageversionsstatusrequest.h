// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGEVERSIONSSTATUSREQUEST_H
#define QTAWS_UPDATEPACKAGEVERSIONSSTATUSREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class UpdatePackageVersionsStatusRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT UpdatePackageVersionsStatusRequest : public CodeArtifactRequest {

public:
    UpdatePackageVersionsStatusRequest(const UpdatePackageVersionsStatusRequest &other);
    UpdatePackageVersionsStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePackageVersionsStatusRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
