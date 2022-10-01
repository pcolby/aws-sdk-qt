// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPROXYREQUEST_P_H
#define QTAWS_DELETEDBPROXYREQUEST_P_H

#include "rdsrequest_p.h"
#include "deletedbproxyrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBProxyRequest;

class DeleteDBProxyRequestPrivate : public RdsRequestPrivate {

public:
    DeleteDBProxyRequestPrivate(const RdsRequest::Action action,
                                   DeleteDBProxyRequest * const q);
    DeleteDBProxyRequestPrivate(const DeleteDBProxyRequestPrivate &other,
                                   DeleteDBProxyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBProxyRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
