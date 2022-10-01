// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENAMESPACERESPONSE_P_H
#define QTAWS_DESCRIBENAMESPACERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class DescribeNamespaceResponse;

class DescribeNamespaceResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit DescribeNamespaceResponsePrivate(DescribeNamespaceResponse * const q);

    void parseDescribeNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNamespaceResponse)
    Q_DISABLE_COPY(DescribeNamespaceResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
