// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEVERSIONSREQUEST_P_H
#define QTAWS_LISTTEMPLATEVERSIONSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "listtemplateversionsrequest.h"

namespace QtAws {
namespace Pinpoint {

class ListTemplateVersionsRequest;

class ListTemplateVersionsRequestPrivate : public PinpointRequestPrivate {

public:
    ListTemplateVersionsRequestPrivate(const PinpointRequest::Action action,
                                   ListTemplateVersionsRequest * const q);
    ListTemplateVersionsRequestPrivate(const ListTemplateVersionsRequestPrivate &other,
                                   ListTemplateVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTemplateVersionsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
