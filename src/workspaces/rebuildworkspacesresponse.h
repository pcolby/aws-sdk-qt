// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBUILDWORKSPACESRESPONSE_H
#define QTAWS_REBUILDWORKSPACESRESPONSE_H

#include "workspacesresponse.h"
#include "rebuildworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RebuildWorkspacesResponsePrivate;

class QTAWSWORKSPACES_EXPORT RebuildWorkspacesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    RebuildWorkspacesResponse(const RebuildWorkspacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebuildWorkspacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebuildWorkspacesResponse)
    Q_DISABLE_COPY(RebuildWorkspacesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
