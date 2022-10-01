// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICERESPONSE_H
#define QTAWS_DELETESERVICERESPONSE_H

#include "migrationhubrefactorspacesresponse.h"
#include "deleteservicerequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteServiceResponsePrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT DeleteServiceResponse : public MigrationHubRefactorSpacesResponse {
    Q_OBJECT

public:
    DeleteServiceResponse(const DeleteServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceResponse)
    Q_DISABLE_COPY(DeleteServiceResponse)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
