// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECREATEDARTIFACTREQUEST_H
#define QTAWS_ASSOCIATECREATEDARTIFACTREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class AssociateCreatedArtifactRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT AssociateCreatedArtifactRequest : public MigrationHubRequest {

public:
    AssociateCreatedArtifactRequest(const AssociateCreatedArtifactRequest &other);
    AssociateCreatedArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateCreatedArtifactRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
