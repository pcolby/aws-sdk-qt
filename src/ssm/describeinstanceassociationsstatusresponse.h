// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEASSOCIATIONSSTATUSRESPONSE_H
#define QTAWS_DESCRIBEINSTANCEASSOCIATIONSSTATUSRESPONSE_H

#include "ssmresponse.h"
#include "describeinstanceassociationsstatusrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstanceAssociationsStatusResponsePrivate;

class QTAWSSSM_EXPORT DescribeInstanceAssociationsStatusResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeInstanceAssociationsStatusResponse(const DescribeInstanceAssociationsStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceAssociationsStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceAssociationsStatusResponse)
    Q_DISABLE_COPY(DescribeInstanceAssociationsStatusResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
