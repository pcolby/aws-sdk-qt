// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREWORKSPACERESPONSE_H
#define QTAWS_RESTOREWORKSPACERESPONSE_H

#include "workspacesresponse.h"
#include "restoreworkspacerequest.h"

namespace QtAws {
namespace WorkSpaces {

class RestoreWorkspaceResponsePrivate;

class QTAWSWORKSPACES_EXPORT RestoreWorkspaceResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    RestoreWorkspaceResponse(const RestoreWorkspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreWorkspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreWorkspaceResponse)
    Q_DISABLE_COPY(RestoreWorkspaceResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
