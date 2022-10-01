// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKSPACESRESPONSE_H
#define QTAWS_STARTWORKSPACESRESPONSE_H

#include "workspacesresponse.h"
#include "startworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class StartWorkspacesResponsePrivate;

class QTAWSWORKSPACES_EXPORT StartWorkspacesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    StartWorkspacesResponse(const StartWorkspacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartWorkspacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartWorkspacesResponse)
    Q_DISABLE_COPY(StartWorkspacesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
