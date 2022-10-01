// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIASSOCIATIONREQUEST_H
#define QTAWS_GETAPIASSOCIATIONREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class GetApiAssociationRequestPrivate;

class QTAWSAPPSYNC_EXPORT GetApiAssociationRequest : public AppSyncRequest {

public:
    GetApiAssociationRequest(const GetApiAssociationRequest &other);
    GetApiAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiAssociationRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
