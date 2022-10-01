// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPBLOCKREQUEST_P_H
#define QTAWS_DELETEAPPBLOCKREQUEST_P_H

#include "appstreamrequest_p.h"
#include "deleteappblockrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteAppBlockRequest;

class DeleteAppBlockRequestPrivate : public AppStreamRequestPrivate {

public:
    DeleteAppBlockRequestPrivate(const AppStreamRequest::Action action,
                                   DeleteAppBlockRequest * const q);
    DeleteAppBlockRequestPrivate(const DeleteAppBlockRequestPrivate &other,
                                   DeleteAppBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppBlockRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
