// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONREQUEST_P_H
#define QTAWS_GETSESSIONREQUEST_P_H

#include "lexruntimerequest_p.h"
#include "getsessionrequest.h"

namespace QtAws {
namespace LexRuntime {

class GetSessionRequest;

class GetSessionRequestPrivate : public LexRuntimeRequestPrivate {

public:
    GetSessionRequestPrivate(const LexRuntimeRequest::Action action,
                                   GetSessionRequest * const q);
    GetSessionRequestPrivate(const GetSessionRequestPrivate &other,
                                   GetSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSessionRequest)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
