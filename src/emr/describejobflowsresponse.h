// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBFLOWSRESPONSE_H
#define QTAWS_DESCRIBEJOBFLOWSRESPONSE_H

#include "emrresponse.h"
#include "describejobflowsrequest.h"

namespace QtAws {
namespace Emr {

class DescribeJobFlowsResponsePrivate;

class QTAWSEMR_EXPORT DescribeJobFlowsResponse : public EmrResponse {
    Q_OBJECT

public:
    DescribeJobFlowsResponse(const DescribeJobFlowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobFlowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobFlowsResponse)
    Q_DISABLE_COPY(DescribeJobFlowsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
