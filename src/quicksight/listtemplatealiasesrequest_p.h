// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEALIASESREQUEST_P_H
#define QTAWS_LISTTEMPLATEALIASESREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listtemplatealiasesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListTemplateAliasesRequest;

class ListTemplateAliasesRequestPrivate : public QuickSightRequestPrivate {

public:
    ListTemplateAliasesRequestPrivate(const QuickSightRequest::Action action,
                                   ListTemplateAliasesRequest * const q);
    ListTemplateAliasesRequestPrivate(const ListTemplateAliasesRequestPrivate &other,
                                   ListTemplateAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTemplateAliasesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
