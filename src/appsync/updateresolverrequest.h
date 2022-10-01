// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERREQUEST_H
#define QTAWS_UPDATERESOLVERREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class UpdateResolverRequestPrivate;

class QTAWSAPPSYNC_EXPORT UpdateResolverRequest : public AppSyncRequest {

public:
    UpdateResolverRequest(const UpdateResolverRequest &other);
    UpdateResolverRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
