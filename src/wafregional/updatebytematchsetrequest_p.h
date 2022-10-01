// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBYTEMATCHSETREQUEST_P_H
#define QTAWS_UPDATEBYTEMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updatebytematchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateByteMatchSetRequest;

class UpdateByteMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateByteMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateByteMatchSetRequest * const q);
    UpdateByteMatchSetRequestPrivate(const UpdateByteMatchSetRequestPrivate &other,
                                   UpdateByteMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateByteMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
