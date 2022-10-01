// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOREQUEST_P_H
#define QTAWS_GETSTUDIOREQUEST_P_H

#include "nimblerequest_p.h"
#include "getstudiorequest.h"

namespace QtAws {
namespace Nimble {

class GetStudioRequest;

class GetStudioRequestPrivate : public NimbleRequestPrivate {

public:
    GetStudioRequestPrivate(const NimbleRequest::Action action,
                                   GetStudioRequest * const q);
    GetStudioRequestPrivate(const GetStudioRequestPrivate &other,
                                   GetStudioRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStudioRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
