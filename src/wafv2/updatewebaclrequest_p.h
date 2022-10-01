// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBACLREQUEST_P_H
#define QTAWS_UPDATEWEBACLREQUEST_P_H

#include "wafv2request_p.h"
#include "updatewebaclrequest.h"

namespace QtAws {
namespace Wafv2 {

class UpdateWebACLRequest;

class UpdateWebACLRequestPrivate : public Wafv2RequestPrivate {

public:
    UpdateWebACLRequestPrivate(const Wafv2Request::Action action,
                                   UpdateWebACLRequest * const q);
    UpdateWebACLRequestPrivate(const UpdateWebACLRequestPrivate &other,
                                   UpdateWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
