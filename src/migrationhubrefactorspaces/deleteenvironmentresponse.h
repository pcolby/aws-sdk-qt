// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTRESPONSE_H
#define QTAWS_DELETEENVIRONMENTRESPONSE_H

#include "migrationhubrefactorspacesresponse.h"
#include "deleteenvironmentrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteEnvironmentResponsePrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT DeleteEnvironmentResponse : public MigrationHubRefactorSpacesResponse {
    Q_OBJECT

public:
    DeleteEnvironmentResponse(const DeleteEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentResponse)
    Q_DISABLE_COPY(DeleteEnvironmentResponse)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
