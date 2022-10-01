// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATEWORKSPACEREQUEST_H
#define QTAWS_MIGRATEWORKSPACEREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class MigrateWorkspaceRequestPrivate;

class QTAWSWORKSPACES_EXPORT MigrateWorkspaceRequest : public WorkSpacesRequest {

public:
    MigrateWorkspaceRequest(const MigrateWorkspaceRequest &other);
    MigrateWorkspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MigrateWorkspaceRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
