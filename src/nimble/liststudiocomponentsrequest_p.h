// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOCOMPONENTSREQUEST_P_H
#define QTAWS_LISTSTUDIOCOMPONENTSREQUEST_P_H

#include "nimblerequest_p.h"
#include "liststudiocomponentsrequest.h"

namespace QtAws {
namespace Nimble {

class ListStudioComponentsRequest;

class ListStudioComponentsRequestPrivate : public NimbleRequestPrivate {

public:
    ListStudioComponentsRequestPrivate(const NimbleRequest::Action action,
                                   ListStudioComponentsRequest * const q);
    ListStudioComponentsRequestPrivate(const ListStudioComponentsRequestPrivate &other,
                                   ListStudioComponentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStudioComponentsRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
