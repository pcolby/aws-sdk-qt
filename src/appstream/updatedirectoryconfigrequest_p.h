// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTORYCONFIGREQUEST_P_H
#define QTAWS_UPDATEDIRECTORYCONFIGREQUEST_P_H

#include "appstreamrequest_p.h"
#include "updatedirectoryconfigrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateDirectoryConfigRequest;

class UpdateDirectoryConfigRequestPrivate : public AppStreamRequestPrivate {

public:
    UpdateDirectoryConfigRequestPrivate(const AppStreamRequest::Action action,
                                   UpdateDirectoryConfigRequest * const q);
    UpdateDirectoryConfigRequestPrivate(const UpdateDirectoryConfigRequestPrivate &other,
                                   UpdateDirectoryConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDirectoryConfigRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
