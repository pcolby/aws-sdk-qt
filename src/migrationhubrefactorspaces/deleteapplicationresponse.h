// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONRESPONSE_H
#define QTAWS_DELETEAPPLICATIONRESPONSE_H

#include "migrationhubrefactorspacesresponse.h"
#include "deleteapplicationrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteApplicationResponsePrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT DeleteApplicationResponse : public MigrationHubRefactorSpacesResponse {
    Q_OBJECT

public:
    DeleteApplicationResponse(const DeleteApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationResponse)
    Q_DISABLE_COPY(DeleteApplicationResponse)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
