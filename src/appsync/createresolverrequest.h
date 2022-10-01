// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERREQUEST_H
#define QTAWS_CREATERESOLVERREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class CreateResolverRequestPrivate;

class QTAWSAPPSYNC_EXPORT CreateResolverRequest : public AppSyncRequest {

public:
    CreateResolverRequest(const CreateResolverRequest &other);
    CreateResolverRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResolverRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
