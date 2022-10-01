// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGRAPHQLAPIREQUEST_H
#define QTAWS_UPDATEGRAPHQLAPIREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class UpdateGraphqlApiRequestPrivate;

class QTAWSAPPSYNC_EXPORT UpdateGraphqlApiRequest : public AppSyncRequest {

public:
    UpdateGraphqlApiRequest(const UpdateGraphqlApiRequest &other);
    UpdateGraphqlApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGraphqlApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
