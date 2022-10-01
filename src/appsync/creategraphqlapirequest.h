// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRAPHQLAPIREQUEST_H
#define QTAWS_CREATEGRAPHQLAPIREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class CreateGraphqlApiRequestPrivate;

class QTAWSAPPSYNC_EXPORT CreateGraphqlApiRequest : public AppSyncRequest {

public:
    CreateGraphqlApiRequest(const CreateGraphqlApiRequest &other);
    CreateGraphqlApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGraphqlApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
