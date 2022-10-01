// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIASSOCIATIONREQUEST_P_H
#define QTAWS_GETAPIASSOCIATIONREQUEST_P_H

#include "appsyncrequest_p.h"
#include "getapiassociationrequest.h"

namespace QtAws {
namespace AppSync {

class GetApiAssociationRequest;

class GetApiAssociationRequestPrivate : public AppSyncRequestPrivate {

public:
    GetApiAssociationRequestPrivate(const AppSyncRequest::Action action,
                                   GetApiAssociationRequest * const q);
    GetApiAssociationRequestPrivate(const GetApiAssociationRequestPrivate &other,
                                   GetApiAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApiAssociationRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
