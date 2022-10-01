// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSQLINJECTIONMATCHSETREQUEST_P_H
#define QTAWS_GETSQLINJECTIONMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "getsqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class GetSqlInjectionMatchSetRequest;

class GetSqlInjectionMatchSetRequestPrivate : public WafRequestPrivate {

public:
    GetSqlInjectionMatchSetRequestPrivate(const WafRequest::Action action,
                                   GetSqlInjectionMatchSetRequest * const q);
    GetSqlInjectionMatchSetRequestPrivate(const GetSqlInjectionMatchSetRequestPrivate &other,
                                   GetSqlInjectionMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSqlInjectionMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
