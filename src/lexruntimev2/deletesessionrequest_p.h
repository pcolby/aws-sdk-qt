// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESESSIONREQUEST_P_H
#define QTAWS_DELETESESSIONREQUEST_P_H

#include "lexruntimev2request_p.h"
#include "deletesessionrequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class DeleteSessionRequest;

class DeleteSessionRequestPrivate : public LexRuntimeV2RequestPrivate {

public:
    DeleteSessionRequestPrivate(const LexRuntimeV2Request::Action action,
                                   DeleteSessionRequest * const q);
    DeleteSessionRequestPrivate(const DeleteSessionRequestPrivate &other,
                                   DeleteSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSessionRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
