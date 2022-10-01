// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPREQUEST_P_H
#define QTAWS_DELETEAPPREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "deleteapprequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteAppRequest;

class DeleteAppRequestPrivate : public ResilienceHubRequestPrivate {

public:
    DeleteAppRequestPrivate(const ResilienceHubRequest::Action action,
                                   DeleteAppRequest * const q);
    DeleteAppRequestPrivate(const DeleteAppRequestPrivate &other,
                                   DeleteAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
