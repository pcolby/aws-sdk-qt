// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSESSIONREQUEST_P_H
#define QTAWS_PUTSESSIONREQUEST_P_H

#include "lexruntimev2request_p.h"
#include "putsessionrequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class PutSessionRequest;

class PutSessionRequestPrivate : public LexRuntimeV2RequestPrivate {

public:
    PutSessionRequestPrivate(const LexRuntimeV2Request::Action action,
                                   PutSessionRequest * const q);
    PutSessionRequestPrivate(const PutSessionRequestPrivate &other,
                                   PutSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSessionRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
