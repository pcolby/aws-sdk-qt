// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPDATEDWORKSPACEIMAGEREQUEST_H
#define QTAWS_CREATEUPDATEDWORKSPACEIMAGEREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateUpdatedWorkspaceImageRequestPrivate;

class QTAWSWORKSPACES_EXPORT CreateUpdatedWorkspaceImageRequest : public WorkSpacesRequest {

public:
    CreateUpdatedWorkspaceImageRequest(const CreateUpdatedWorkspaceImageRequest &other);
    CreateUpdatedWorkspaceImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUpdatedWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
