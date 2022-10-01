// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONEXECUTIONTARGETSRESPONSE_H
#define QTAWS_DESCRIBEASSOCIATIONEXECUTIONTARGETSRESPONSE_H

#include "ssmresponse.h"
#include "describeassociationexecutiontargetsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationExecutionTargetsResponsePrivate;

class QTAWSSSM_EXPORT DescribeAssociationExecutionTargetsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeAssociationExecutionTargetsResponse(const DescribeAssociationExecutionTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAssociationExecutionTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssociationExecutionTargetsResponse)
    Q_DISABLE_COPY(DescribeAssociationExecutionTargetsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
