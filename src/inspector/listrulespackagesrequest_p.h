// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESPACKAGESREQUEST_P_H
#define QTAWS_LISTRULESPACKAGESREQUEST_P_H

#include "inspectorrequest_p.h"
#include "listrulespackagesrequest.h"

namespace QtAws {
namespace Inspector {

class ListRulesPackagesRequest;

class ListRulesPackagesRequestPrivate : public InspectorRequestPrivate {

public:
    ListRulesPackagesRequestPrivate(const InspectorRequest::Action action,
                                   ListRulesPackagesRequest * const q);
    ListRulesPackagesRequestPrivate(const ListRulesPackagesRequestPrivate &other,
                                   ListRulesPackagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRulesPackagesRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
