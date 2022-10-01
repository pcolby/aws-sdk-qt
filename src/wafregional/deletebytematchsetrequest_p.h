// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBYTEMATCHSETREQUEST_P_H
#define QTAWS_DELETEBYTEMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deletebytematchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteByteMatchSetRequest;

class DeleteByteMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeleteByteMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   DeleteByteMatchSetRequest * const q);
    DeleteByteMatchSetRequestPrivate(const DeleteByteMatchSetRequestPrivate &other,
                                   DeleteByteMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteByteMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
