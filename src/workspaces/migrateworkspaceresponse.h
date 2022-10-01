// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATEWORKSPACERESPONSE_H
#define QTAWS_MIGRATEWORKSPACERESPONSE_H

#include "workspacesresponse.h"
#include "migrateworkspacerequest.h"

namespace QtAws {
namespace WorkSpaces {

class MigrateWorkspaceResponsePrivate;

class QTAWSWORKSPACES_EXPORT MigrateWorkspaceResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    MigrateWorkspaceResponse(const MigrateWorkspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MigrateWorkspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MigrateWorkspaceResponse)
    Q_DISABLE_COPY(MigrateWorkspaceResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
