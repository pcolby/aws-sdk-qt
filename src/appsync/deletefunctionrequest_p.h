// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONREQUEST_P_H
#define QTAWS_DELETEFUNCTIONREQUEST_P_H

#include "appsyncrequest_p.h"
#include "deletefunctionrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteFunctionRequest;

class DeleteFunctionRequestPrivate : public AppSyncRequestPrivate {

public:
    DeleteFunctionRequestPrivate(const AppSyncRequest::Action action,
                                   DeleteFunctionRequest * const q);
    DeleteFunctionRequestPrivate(const DeleteFunctionRequestPrivate &other,
                                   DeleteFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
