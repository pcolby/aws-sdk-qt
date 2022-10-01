// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFLOWTEMPLATESREQUEST_P_H
#define QTAWS_SEARCHFLOWTEMPLATESREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "searchflowtemplatesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchFlowTemplatesRequest;

class SearchFlowTemplatesRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    SearchFlowTemplatesRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   SearchFlowTemplatesRequest * const q);
    SearchFlowTemplatesRequestPrivate(const SearchFlowTemplatesRequestPrivate &other,
                                   SearchFlowTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchFlowTemplatesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
