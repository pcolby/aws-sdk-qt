// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONREADMEREQUEST_H
#define QTAWS_GETPACKAGEVERSIONREADMEREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetPackageVersionReadmeRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT GetPackageVersionReadmeRequest : public CodeArtifactRequest {

public:
    GetPackageVersionReadmeRequest(const GetPackageVersionReadmeRequest &other);
    GetPackageVersionReadmeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPackageVersionReadmeRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
