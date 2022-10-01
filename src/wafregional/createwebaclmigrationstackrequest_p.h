// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLMIGRATIONSTACKREQUEST_P_H
#define QTAWS_CREATEWEBACLMIGRATIONSTACKREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "createwebaclmigrationstackrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateWebACLMigrationStackRequest;

class CreateWebACLMigrationStackRequestPrivate : public WafRegionalRequestPrivate {

public:
    CreateWebACLMigrationStackRequestPrivate(const WafRegionalRequest::Action action,
                                   CreateWebACLMigrationStackRequest * const q);
    CreateWebACLMigrationStackRequestPrivate(const CreateWebACLMigrationStackRequestPrivate &other,
                                   CreateWebACLMigrationStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWebACLMigrationStackRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
