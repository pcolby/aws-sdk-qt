// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONRESPONSE_H
#define QTAWS_GETAPPLICATIONRESPONSE_H

#include "migrationhubrefactorspacesresponse.h"
#include "getapplicationrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetApplicationResponsePrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT GetApplicationResponse : public MigrationHubRefactorSpacesResponse {
    Q_OBJECT

public:
    GetApplicationResponse(const GetApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationResponse)
    Q_DISABLE_COPY(GetApplicationResponse)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
