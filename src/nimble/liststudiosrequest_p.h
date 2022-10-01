// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOSREQUEST_P_H
#define QTAWS_LISTSTUDIOSREQUEST_P_H

#include "nimblerequest_p.h"
#include "liststudiosrequest.h"

namespace QtAws {
namespace Nimble {

class ListStudiosRequest;

class ListStudiosRequestPrivate : public NimbleRequestPrivate {

public:
    ListStudiosRequestPrivate(const NimbleRequest::Action action,
                                   ListStudiosRequest * const q);
    ListStudiosRequestPrivate(const ListStudiosRequestPrivate &other,
                                   ListStudiosRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStudiosRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
