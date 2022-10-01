// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPSETREQUEST_P_H
#define QTAWS_DELETEIPSETREQUEST_P_H

#include "wafrequest_p.h"
#include "deleteipsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteIPSetRequest;

class DeleteIPSetRequestPrivate : public WafRequestPrivate {

public:
    DeleteIPSetRequestPrivate(const WafRequest::Action action,
                                   DeleteIPSetRequest * const q);
    DeleteIPSetRequestPrivate(const DeleteIPSetRequestPrivate &other,
                                   DeleteIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIPSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
