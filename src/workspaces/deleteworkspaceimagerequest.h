// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEIMAGEREQUEST_H
#define QTAWS_DELETEWORKSPACEIMAGEREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteWorkspaceImageRequestPrivate;

class QTAWSWORKSPACES_EXPORT DeleteWorkspaceImageRequest : public WorkSpacesRequest {

public:
    DeleteWorkspaceImageRequest(const DeleteWorkspaceImageRequest &other);
    DeleteWorkspaceImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
