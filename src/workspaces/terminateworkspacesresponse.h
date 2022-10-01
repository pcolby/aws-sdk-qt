// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEWORKSPACESRESPONSE_H
#define QTAWS_TERMINATEWORKSPACESRESPONSE_H

#include "workspacesresponse.h"
#include "terminateworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class TerminateWorkspacesResponsePrivate;

class QTAWSWORKSPACES_EXPORT TerminateWorkspacesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    TerminateWorkspacesResponse(const TerminateWorkspacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateWorkspacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateWorkspacesResponse)
    Q_DISABLE_COPY(TerminateWorkspacesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
