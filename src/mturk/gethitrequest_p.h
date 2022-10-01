// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHITREQUEST_P_H
#define QTAWS_GETHITREQUEST_P_H

#include "mturkrequest_p.h"
#include "gethitrequest.h"

namespace QtAws {
namespace MTurk {

class GetHITRequest;

class GetHITRequestPrivate : public MTurkRequestPrivate {

public:
    GetHITRequestPrivate(const MTurkRequest::Action action,
                                   GetHITRequest * const q);
    GetHITRequestPrivate(const GetHITRequestPrivate &other,
                                   GetHITRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
