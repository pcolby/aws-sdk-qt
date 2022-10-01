// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECREATEDARTIFACTRESPONSE_H
#define QTAWS_ASSOCIATECREATEDARTIFACTRESPONSE_H

#include "migrationhubresponse.h"
#include "associatecreatedartifactrequest.h"

namespace QtAws {
namespace MigrationHub {

class AssociateCreatedArtifactResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT AssociateCreatedArtifactResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    AssociateCreatedArtifactResponse(const AssociateCreatedArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateCreatedArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateCreatedArtifactResponse)
    Q_DISABLE_COPY(AssociateCreatedArtifactResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
