// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTORYCONFIGREQUEST_P_H
#define QTAWS_CREATEDIRECTORYCONFIGREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createdirectoryconfigrequest.h"

namespace QtAws {
namespace AppStream {

class CreateDirectoryConfigRequest;

class CreateDirectoryConfigRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateDirectoryConfigRequestPrivate(const AppStreamRequest::Action action,
                                   CreateDirectoryConfigRequest * const q);
    CreateDirectoryConfigRequestPrivate(const CreateDirectoryConfigRequestPrivate &other,
                                   CreateDirectoryConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDirectoryConfigRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
