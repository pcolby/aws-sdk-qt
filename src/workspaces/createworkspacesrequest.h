// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACESREQUEST_H
#define QTAWS_CREATEWORKSPACESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspacesRequestPrivate;

class QTAWSWORKSPACES_EXPORT CreateWorkspacesRequest : public WorkSpacesRequest {

public:
    CreateWorkspacesRequest(const CreateWorkspacesRequest &other);
    CreateWorkspacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
