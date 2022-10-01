// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTORYCONFIGREQUEST_P_H
#define QTAWS_DELETEDIRECTORYCONFIGREQUEST_P_H

#include "appstreamrequest_p.h"
#include "deletedirectoryconfigrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteDirectoryConfigRequest;

class DeleteDirectoryConfigRequestPrivate : public AppStreamRequestPrivate {

public:
    DeleteDirectoryConfigRequestPrivate(const AppStreamRequest::Action action,
                                   DeleteDirectoryConfigRequest * const q);
    DeleteDirectoryConfigRequestPrivate(const DeleteDirectoryConfigRequestPrivate &other,
                                   DeleteDirectoryConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDirectoryConfigRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
