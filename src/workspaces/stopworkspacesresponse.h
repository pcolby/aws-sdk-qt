// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPWORKSPACESRESPONSE_H
#define QTAWS_STOPWORKSPACESRESPONSE_H

#include "workspacesresponse.h"
#include "stopworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class StopWorkspacesResponsePrivate;

class QTAWSWORKSPACES_EXPORT StopWorkspacesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    StopWorkspacesResponse(const StopWorkspacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopWorkspacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopWorkspacesResponse)
    Q_DISABLE_COPY(StopWorkspacesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
