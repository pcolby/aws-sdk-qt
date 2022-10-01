// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTYPEREQUEST_H
#define QTAWS_GETTYPEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class GetTypeRequestPrivate;

class QTAWSAPPSYNC_EXPORT GetTypeRequest : public AppSyncRequest {

public:
    GetTypeRequest(const GetTypeRequest &other);
    GetTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTypeRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
