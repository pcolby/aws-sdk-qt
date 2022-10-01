// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEVERSIONSREQUEST_P_H
#define QTAWS_LISTTEMPLATEVERSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listtemplateversionsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListTemplateVersionsRequest;

class ListTemplateVersionsRequestPrivate : public QuickSightRequestPrivate {

public:
    ListTemplateVersionsRequestPrivate(const QuickSightRequest::Action action,
                                   ListTemplateVersionsRequest * const q);
    ListTemplateVersionsRequestPrivate(const ListTemplateVersionsRequestPrivate &other,
                                   ListTemplateVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTemplateVersionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
