// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECREATEDARTIFACTRESPONSE_H
#define QTAWS_DISASSOCIATECREATEDARTIFACTRESPONSE_H

#include "migrationhubresponse.h"
#include "disassociatecreatedartifactrequest.h"

namespace QtAws {
namespace MigrationHub {

class DisassociateCreatedArtifactResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT DisassociateCreatedArtifactResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    DisassociateCreatedArtifactResponse(const DisassociateCreatedArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateCreatedArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateCreatedArtifactResponse)
    Q_DISABLE_COPY(DisassociateCreatedArtifactResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
