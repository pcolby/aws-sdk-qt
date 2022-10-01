// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBYTEMATCHSETREQUEST_P_H
#define QTAWS_CREATEBYTEMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "createbytematchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateByteMatchSetRequest;

class CreateByteMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    CreateByteMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   CreateByteMatchSetRequest * const q);
    CreateByteMatchSetRequestPrivate(const CreateByteMatchSetRequestPrivate &other,
                                   CreateByteMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateByteMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
