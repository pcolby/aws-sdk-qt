// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTCLIENTADDINREQUEST_H
#define QTAWS_CREATECONNECTCLIENTADDINREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateConnectClientAddInRequestPrivate;

class QTAWSWORKSPACES_EXPORT CreateConnectClientAddInRequest : public WorkSpacesRequest {

public:
    CreateConnectClientAddInRequest(const CreateConnectClientAddInRequest &other);
    CreateConnectClientAddInRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectClientAddInRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
