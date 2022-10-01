// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPSETREQUEST_P_H
#define QTAWS_DELETEIPSETREQUEST_P_H

#include "wafv2request_p.h"
#include "deleteipsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class DeleteIPSetRequest;

class DeleteIPSetRequestPrivate : public Wafv2RequestPrivate {

public:
    DeleteIPSetRequestPrivate(const Wafv2Request::Action action,
                                   DeleteIPSetRequest * const q);
    DeleteIPSetRequestPrivate(const DeleteIPSetRequestPrivate &other,
                                   DeleteIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIPSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
