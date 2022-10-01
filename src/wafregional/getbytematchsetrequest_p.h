// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBYTEMATCHSETREQUEST_P_H
#define QTAWS_GETBYTEMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getbytematchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetByteMatchSetRequest;

class GetByteMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetByteMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   GetByteMatchSetRequest * const q);
    GetByteMatchSetRequestPrivate(const GetByteMatchSetRequestPrivate &other,
                                   GetByteMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetByteMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
