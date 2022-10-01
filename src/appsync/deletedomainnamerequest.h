// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINNAMEREQUEST_H
#define QTAWS_DELETEDOMAINNAMEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteDomainNameRequestPrivate;

class QTAWSAPPSYNC_EXPORT DeleteDomainNameRequest : public AppSyncRequest {

public:
    DeleteDomainNameRequest(const DeleteDomainNameRequest &other);
    DeleteDomainNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainNameRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
