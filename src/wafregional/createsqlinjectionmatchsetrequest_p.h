// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESQLINJECTIONMATCHSETREQUEST_P_H
#define QTAWS_CREATESQLINJECTIONMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "createsqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateSqlInjectionMatchSetRequest;

class CreateSqlInjectionMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    CreateSqlInjectionMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   CreateSqlInjectionMatchSetRequest * const q);
    CreateSqlInjectionMatchSetRequestPrivate(const CreateSqlInjectionMatchSetRequestPrivate &other,
                                   CreateSqlInjectionMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSqlInjectionMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
