// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTBRANDINGREQUEST_H
#define QTAWS_DELETECLIENTBRANDINGREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteClientBrandingRequestPrivate;

class QTAWSWORKSPACES_EXPORT DeleteClientBrandingRequest : public WorkSpacesRequest {

public:
    DeleteClientBrandingRequest(const DeleteClientBrandingRequest &other);
    DeleteClientBrandingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClientBrandingRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
