// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENAMESPACEREQUEST_P_H
#define QTAWS_DESCRIBENAMESPACEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "describenamespacerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DescribeNamespaceRequest;

class DescribeNamespaceRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    DescribeNamespaceRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   DescribeNamespaceRequest * const q);
    DescribeNamespaceRequestPrivate(const DescribeNamespaceRequestPrivate &other,
                                   DescribeNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNamespaceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
