// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONREQUEST_P_H
#define QTAWS_UPDATEFUNCTIONREQUEST_P_H

#include "appsyncrequest_p.h"
#include "updatefunctionrequest.h"

namespace QtAws {
namespace AppSync {

class UpdateFunctionRequest;

class UpdateFunctionRequestPrivate : public AppSyncRequestPrivate {

public:
    UpdateFunctionRequestPrivate(const AppSyncRequest::Action action,
                                   UpdateFunctionRequest * const q);
    UpdateFunctionRequestPrivate(const UpdateFunctionRequestPrivate &other,
                                   UpdateFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
