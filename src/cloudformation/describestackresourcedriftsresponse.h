// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCEDRIFTSRESPONSE_H
#define QTAWS_DESCRIBESTACKRESOURCEDRIFTSRESPONSE_H

#include "cloudformationresponse.h"
#include "describestackresourcedriftsrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourceDriftsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackResourceDriftsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeStackResourceDriftsResponse(const DescribeStackResourceDriftsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackResourceDriftsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackResourceDriftsResponse)
    Q_DISABLE_COPY(DescribeStackResourceDriftsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
