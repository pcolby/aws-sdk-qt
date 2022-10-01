// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFLOWEXECUTIONSREQUEST_P_H
#define QTAWS_SEARCHFLOWEXECUTIONSREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "searchflowexecutionsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchFlowExecutionsRequest;

class SearchFlowExecutionsRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    SearchFlowExecutionsRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   SearchFlowExecutionsRequest * const q);
    SearchFlowExecutionsRequestPrivate(const SearchFlowExecutionsRequestPrivate &other,
                                   SearchFlowExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchFlowExecutionsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
