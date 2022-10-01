// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERHIERARCHYSTRUCTURERESPONSE_H
#define QTAWS_DESCRIBEUSERHIERARCHYSTRUCTURERESPONSE_H

#include "connectresponse.h"
#include "describeuserhierarchystructurerequest.h"

namespace QtAws {
namespace Connect {

class DescribeUserHierarchyStructureResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeUserHierarchyStructureResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeUserHierarchyStructureResponse(const DescribeUserHierarchyStructureRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserHierarchyStructureRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserHierarchyStructureResponse)
    Q_DISABLE_COPY(DescribeUserHierarchyStructureResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
