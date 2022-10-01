// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTTEMPLATEVERSIONSREQUEST_P_H
#define QTAWS_LISTENVIRONMENTTEMPLATEVERSIONSREQUEST_P_H

#include "protonrequest_p.h"
#include "listenvironmenttemplateversionsrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentTemplateVersionsRequest;

class ListEnvironmentTemplateVersionsRequestPrivate : public ProtonRequestPrivate {

public:
    ListEnvironmentTemplateVersionsRequestPrivate(const ProtonRequest::Action action,
                                   ListEnvironmentTemplateVersionsRequest * const q);
    ListEnvironmentTemplateVersionsRequestPrivate(const ListEnvironmentTemplateVersionsRequestPrivate &other,
                                   ListEnvironmentTemplateVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentTemplateVersionsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
