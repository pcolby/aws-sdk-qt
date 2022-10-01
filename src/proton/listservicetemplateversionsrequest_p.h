// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICETEMPLATEVERSIONSREQUEST_P_H
#define QTAWS_LISTSERVICETEMPLATEVERSIONSREQUEST_P_H

#include "protonrequest_p.h"
#include "listservicetemplateversionsrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceTemplateVersionsRequest;

class ListServiceTemplateVersionsRequestPrivate : public ProtonRequestPrivate {

public:
    ListServiceTemplateVersionsRequestPrivate(const ProtonRequest::Action action,
                                   ListServiceTemplateVersionsRequest * const q);
    ListServiceTemplateVersionsRequestPrivate(const ListServiceTemplateVersionsRequestPrivate &other,
                                   ListServiceTemplateVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceTemplateVersionsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
