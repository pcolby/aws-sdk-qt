// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENAMESPACERESPONSE_P_H
#define QTAWS_DESCRIBENAMESPACERESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeNamespaceResponse;

class DescribeNamespaceResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeNamespaceResponsePrivate(DescribeNamespaceResponse * const q);

    void parseDescribeNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNamespaceResponse)
    Q_DISABLE_COPY(DescribeNamespaceResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
