// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENAMESPACERESPONSE_H
#define QTAWS_DESCRIBENAMESPACERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "describenamespacerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DescribeNamespaceResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DescribeNamespaceResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    DescribeNamespaceResponse(const DescribeNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNamespaceResponse)
    Q_DISABLE_COPY(DescribeNamespaceResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
