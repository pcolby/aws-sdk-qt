// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTVPCSRESPONSE_H
#define QTAWS_LISTENVIRONMENTVPCSRESPONSE_H

#include "migrationhubrefactorspacesresponse.h"
#include "listenvironmentvpcsrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListEnvironmentVpcsResponsePrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT ListEnvironmentVpcsResponse : public MigrationHubRefactorSpacesResponse {
    Q_OBJECT

public:
    ListEnvironmentVpcsResponse(const ListEnvironmentVpcsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEnvironmentVpcsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentVpcsResponse)
    Q_DISABLE_COPY(ListEnvironmentVpcsResponse)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
