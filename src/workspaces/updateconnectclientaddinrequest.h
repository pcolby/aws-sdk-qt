// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTCLIENTADDINREQUEST_H
#define QTAWS_UPDATECONNECTCLIENTADDINREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateConnectClientAddInRequestPrivate;

class QTAWSWORKSPACES_EXPORT UpdateConnectClientAddInRequest : public WorkSpacesRequest {

public:
    UpdateConnectClientAddInRequest(const UpdateConnectClientAddInRequest &other);
    UpdateConnectClientAddInRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectClientAddInRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
