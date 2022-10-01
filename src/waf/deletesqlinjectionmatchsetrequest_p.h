// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESQLINJECTIONMATCHSETREQUEST_P_H
#define QTAWS_DELETESQLINJECTIONMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "deletesqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteSqlInjectionMatchSetRequest;

class DeleteSqlInjectionMatchSetRequestPrivate : public WafRequestPrivate {

public:
    DeleteSqlInjectionMatchSetRequestPrivate(const WafRequest::Action action,
                                   DeleteSqlInjectionMatchSetRequest * const q);
    DeleteSqlInjectionMatchSetRequestPrivate(const DeleteSqlInjectionMatchSetRequestPrivate &other,
                                   DeleteSqlInjectionMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSqlInjectionMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
