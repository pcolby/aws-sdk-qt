// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPACKAGEORIGINCONFIGURATIONREQUEST_H
#define QTAWS_PUTPACKAGEORIGINCONFIGURATIONREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class PutPackageOriginConfigurationRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT PutPackageOriginConfigurationRequest : public CodeArtifactRequest {

public:
    PutPackageOriginConfigurationRequest(const PutPackageOriginConfigurationRequest &other);
    PutPackageOriginConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPackageOriginConfigurationRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
