// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOCOMPONENTREQUEST_P_H
#define QTAWS_GETSTUDIOCOMPONENTREQUEST_P_H

#include "nimblerequest_p.h"
#include "getstudiocomponentrequest.h"

namespace QtAws {
namespace Nimble {

class GetStudioComponentRequest;

class GetStudioComponentRequestPrivate : public NimbleRequestPrivate {

public:
    GetStudioComponentRequestPrivate(const NimbleRequest::Action action,
                                   GetStudioComponentRequest * const q);
    GetStudioComponentRequestPrivate(const GetStudioComponentRequestPrivate &other,
                                   GetStudioComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStudioComponentRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
