// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTCLIENTADDINRESPONSE_H
#define QTAWS_DELETECONNECTCLIENTADDINRESPONSE_H

#include "workspacesresponse.h"
#include "deleteconnectclientaddinrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteConnectClientAddInResponsePrivate;

class QTAWSWORKSPACES_EXPORT DeleteConnectClientAddInResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DeleteConnectClientAddInResponse(const DeleteConnectClientAddInRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConnectClientAddInRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectClientAddInResponse)
    Q_DISABLE_COPY(DeleteConnectClientAddInResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
