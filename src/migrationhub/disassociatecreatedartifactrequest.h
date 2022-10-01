// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECREATEDARTIFACTREQUEST_H
#define QTAWS_DISASSOCIATECREATEDARTIFACTREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class DisassociateCreatedArtifactRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT DisassociateCreatedArtifactRequest : public MigrationHubRequest {

public:
    DisassociateCreatedArtifactRequest(const DisassociateCreatedArtifactRequest &other);
    DisassociateCreatedArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateCreatedArtifactRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
