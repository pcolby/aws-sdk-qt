// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOOLUSAGEREQUEST_H
#define QTAWS_LISTIDENTITYPOOLUSAGEREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class ListIdentityPoolUsageRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT ListIdentityPoolUsageRequest : public CognitoSyncRequest {

public:
    ListIdentityPoolUsageRequest(const ListIdentityPoolUsageRequest &other);
    ListIdentityPoolUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityPoolUsageRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
