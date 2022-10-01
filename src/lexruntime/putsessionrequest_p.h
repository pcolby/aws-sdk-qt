// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSESSIONREQUEST_P_H
#define QTAWS_PUTSESSIONREQUEST_P_H

#include "lexruntimerequest_p.h"
#include "putsessionrequest.h"

namespace QtAws {
namespace LexRuntime {

class PutSessionRequest;

class PutSessionRequestPrivate : public LexRuntimeRequestPrivate {

public:
    PutSessionRequestPrivate(const LexRuntimeRequest::Action action,
                                   PutSessionRequest * const q);
    PutSessionRequestPrivate(const PutSessionRequestPrivate &other,
                                   PutSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSessionRequest)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
