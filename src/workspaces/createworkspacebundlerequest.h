// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEBUNDLEREQUEST_H
#define QTAWS_CREATEWORKSPACEBUNDLEREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspaceBundleRequestPrivate;

class QTAWSWORKSPACES_EXPORT CreateWorkspaceBundleRequest : public WorkSpacesRequest {

public:
    CreateWorkspaceBundleRequest(const CreateWorkspaceBundleRequest &other);
    CreateWorkspaceBundleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspaceBundleRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
