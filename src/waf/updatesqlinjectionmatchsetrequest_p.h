// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESQLINJECTIONMATCHSETREQUEST_P_H
#define QTAWS_UPDATESQLINJECTIONMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "updatesqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class UpdateSqlInjectionMatchSetRequest;

class UpdateSqlInjectionMatchSetRequestPrivate : public WafRequestPrivate {

public:
    UpdateSqlInjectionMatchSetRequestPrivate(const WafRequest::Action action,
                                   UpdateSqlInjectionMatchSetRequest * const q);
    UpdateSqlInjectionMatchSetRequestPrivate(const UpdateSqlInjectionMatchSetRequestPrivate &other,
                                   UpdateSqlInjectionMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSqlInjectionMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
