// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTCLIENTADDINRESPONSE_H
#define QTAWS_CREATECONNECTCLIENTADDINRESPONSE_H

#include "workspacesresponse.h"
#include "createconnectclientaddinrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateConnectClientAddInResponsePrivate;

class QTAWSWORKSPACES_EXPORT CreateConnectClientAddInResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    CreateConnectClientAddInResponse(const CreateConnectClientAddInRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConnectClientAddInRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectClientAddInResponse)
    Q_DISABLE_COPY(CreateConnectClientAddInResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
