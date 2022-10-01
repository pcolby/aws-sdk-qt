// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPBLOCKREQUEST_P_H
#define QTAWS_CREATEAPPBLOCKREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createappblockrequest.h"

namespace QtAws {
namespace AppStream {

class CreateAppBlockRequest;

class CreateAppBlockRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateAppBlockRequestPrivate(const AppStreamRequest::Action action,
                                   CreateAppBlockRequest * const q);
    CreateAppBlockRequestPrivate(const CreateAppBlockRequestPrivate &other,
                                   CreateAppBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppBlockRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
