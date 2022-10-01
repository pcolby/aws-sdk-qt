// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESQLINJECTIONMATCHSETREQUEST_P_H
#define QTAWS_CREATESQLINJECTIONMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "createsqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateSqlInjectionMatchSetRequest;

class CreateSqlInjectionMatchSetRequestPrivate : public WafRequestPrivate {

public:
    CreateSqlInjectionMatchSetRequestPrivate(const WafRequest::Action action,
                                   CreateSqlInjectionMatchSetRequest * const q);
    CreateSqlInjectionMatchSetRequestPrivate(const CreateSqlInjectionMatchSetRequestPrivate &other,
                                   CreateSqlInjectionMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSqlInjectionMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
