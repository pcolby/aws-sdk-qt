// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPREQUEST_P_H
#define QTAWS_DELETEAPPREQUEST_P_H

#include "amplifyrequest_p.h"
#include "deleteapprequest.h"

namespace QtAws {
namespace Amplify {

class DeleteAppRequest;

class DeleteAppRequestPrivate : public AmplifyRequestPrivate {

public:
    DeleteAppRequestPrivate(const AmplifyRequest::Action action,
                                   DeleteAppRequest * const q);
    DeleteAppRequestPrivate(const DeleteAppRequestPrivate &other,
                                   DeleteAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
