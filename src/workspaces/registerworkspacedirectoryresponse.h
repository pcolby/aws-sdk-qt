// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWORKSPACEDIRECTORYRESPONSE_H
#define QTAWS_REGISTERWORKSPACEDIRECTORYRESPONSE_H

#include "workspacesresponse.h"
#include "registerworkspacedirectoryrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RegisterWorkspaceDirectoryResponsePrivate;

class QTAWSWORKSPACES_EXPORT RegisterWorkspaceDirectoryResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    RegisterWorkspaceDirectoryResponse(const RegisterWorkspaceDirectoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterWorkspaceDirectoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterWorkspaceDirectoryResponse)
    Q_DISABLE_COPY(RegisterWorkspaceDirectoryResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
