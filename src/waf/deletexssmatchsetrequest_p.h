// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEXSSMATCHSETREQUEST_P_H
#define QTAWS_DELETEXSSMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "deletexssmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteXssMatchSetRequest;

class DeleteXssMatchSetRequestPrivate : public WafRequestPrivate {

public:
    DeleteXssMatchSetRequestPrivate(const WafRequest::Action action,
                                   DeleteXssMatchSetRequest * const q);
    DeleteXssMatchSetRequestPrivate(const DeleteXssMatchSetRequestPrivate &other,
                                   DeleteXssMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteXssMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
