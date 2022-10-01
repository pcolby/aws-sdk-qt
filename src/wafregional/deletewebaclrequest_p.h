// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBACLREQUEST_P_H
#define QTAWS_DELETEWEBACLREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deletewebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteWebACLRequest;

class DeleteWebACLRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeleteWebACLRequestPrivate(const WafRegionalRequest::Action action,
                                   DeleteWebACLRequest * const q);
    DeleteWebACLRequestPrivate(const DeleteWebACLRequestPrivate &other,
                                   DeleteWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
