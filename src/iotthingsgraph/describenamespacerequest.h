// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENAMESPACEREQUEST_H
#define QTAWS_DESCRIBENAMESPACEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DescribeNamespaceRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DescribeNamespaceRequest : public IoTThingsGraphRequest {

public:
    DescribeNamespaceRequest(const DescribeNamespaceRequest &other);
    DescribeNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNamespaceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
