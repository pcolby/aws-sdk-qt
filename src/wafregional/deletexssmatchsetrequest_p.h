// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEXSSMATCHSETREQUEST_P_H
#define QTAWS_DELETEXSSMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deletexssmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteXssMatchSetRequest;

class DeleteXssMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeleteXssMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   DeleteXssMatchSetRequest * const q);
    DeleteXssMatchSetRequestPrivate(const DeleteXssMatchSetRequestPrivate &other,
                                   DeleteXssMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteXssMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
