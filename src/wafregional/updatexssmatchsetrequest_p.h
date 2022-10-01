// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEXSSMATCHSETREQUEST_P_H
#define QTAWS_UPDATEXSSMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updatexssmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateXssMatchSetRequest;

class UpdateXssMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateXssMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateXssMatchSetRequest * const q);
    UpdateXssMatchSetRequestPrivate(const UpdateXssMatchSetRequestPrivate &other,
                                   UpdateXssMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateXssMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
