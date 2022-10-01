// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMEREQUEST_H
#define QTAWS_GETDOMAINNAMEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class GetDomainNameRequestPrivate;

class QTAWSAPPSYNC_EXPORT GetDomainNameRequest : public AppSyncRequest {

public:
    GetDomainNameRequest(const GetDomainNameRequest &other);
    GetDomainNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainNameRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
