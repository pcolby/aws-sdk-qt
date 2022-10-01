// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEREQUEST_P_H
#define QTAWS_UPDATEDATASOURCEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "updatedatasourcerequest.h"

namespace QtAws {
namespace AppSync {

class UpdateDataSourceRequest;

class UpdateDataSourceRequestPrivate : public AppSyncRequestPrivate {

public:
    UpdateDataSourceRequestPrivate(const AppSyncRequest::Action action,
                                   UpdateDataSourceRequest * const q);
    UpdateDataSourceRequestPrivate(const UpdateDataSourceRequestPrivate &other,
                                   UpdateDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataSourceRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
