// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEIMAGEREQUEST_H
#define QTAWS_CREATEWORKSPACEIMAGEREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspaceImageRequestPrivate;

class QTAWSWORKSPACES_EXPORT CreateWorkspaceImageRequest : public WorkSpacesRequest {

public:
    CreateWorkspaceImageRequest(const CreateWorkspaceImageRequest &other);
    CreateWorkspaceImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
