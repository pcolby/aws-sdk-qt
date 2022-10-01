// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBACLREQUEST_P_H
#define QTAWS_UPDATEWEBACLREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updatewebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateWebACLRequest;

class UpdateWebACLRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateWebACLRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateWebACLRequest * const q);
    UpdateWebACLRequestPrivate(const UpdateWebACLRequestPrivate &other,
                                   UpdateWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
