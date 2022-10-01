// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBETYPECONFIGURATIONSRESPONSE_H
#define QTAWS_BATCHDESCRIBETYPECONFIGURATIONSRESPONSE_H

#include "cloudformationresponse.h"
#include "batchdescribetypeconfigurationsrequest.h"

namespace QtAws {
namespace CloudFormation {

class BatchDescribeTypeConfigurationsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT BatchDescribeTypeConfigurationsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    BatchDescribeTypeConfigurationsResponse(const BatchDescribeTypeConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDescribeTypeConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDescribeTypeConfigurationsResponse)
    Q_DISABLE_COPY(BatchDescribeTypeConfigurationsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
