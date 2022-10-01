// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESETSREQUEST_P_H
#define QTAWS_LISTRULESETSREQUEST_P_H

#include "databrewrequest_p.h"
#include "listrulesetsrequest.h"

namespace QtAws {
namespace DataBrew {

class ListRulesetsRequest;

class ListRulesetsRequestPrivate : public DataBrewRequestPrivate {

public:
    ListRulesetsRequestPrivate(const DataBrewRequest::Action action,
                                   ListRulesetsRequest * const q);
    ListRulesetsRequestPrivate(const ListRulesetsRequestPrivate &other,
                                   ListRulesetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRulesetsRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
