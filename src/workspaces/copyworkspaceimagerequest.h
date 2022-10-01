// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYWORKSPACEIMAGEREQUEST_H
#define QTAWS_COPYWORKSPACEIMAGEREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CopyWorkspaceImageRequestPrivate;

class QTAWSWORKSPACES_EXPORT CopyWorkspaceImageRequest : public WorkSpacesRequest {

public:
    CopyWorkspaceImageRequest(const CopyWorkspaceImageRequest &other);
    CopyWorkspaceImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
