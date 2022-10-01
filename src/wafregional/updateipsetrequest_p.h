// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPSETREQUEST_P_H
#define QTAWS_UPDATEIPSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updateipsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateIPSetRequest;

class UpdateIPSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateIPSetRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateIPSetRequest * const q);
    UpdateIPSetRequestPrivate(const UpdateIPSetRequestPrivate &other,
                                   UpdateIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIPSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
