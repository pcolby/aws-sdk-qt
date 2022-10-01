// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEXSSMATCHSETREQUEST_P_H
#define QTAWS_CREATEXSSMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "createxssmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateXssMatchSetRequest;

class CreateXssMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    CreateXssMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   CreateXssMatchSetRequest * const q);
    CreateXssMatchSetRequestPrivate(const CreateXssMatchSetRequestPrivate &other,
                                   CreateXssMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateXssMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
