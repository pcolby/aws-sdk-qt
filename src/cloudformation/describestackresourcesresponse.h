// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCESRESPONSE_H
#define QTAWS_DESCRIBESTACKRESOURCESRESPONSE_H

#include "cloudformationresponse.h"
#include "describestackresourcesrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourcesResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackResourcesResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeStackResourcesResponse(const DescribeStackResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackResourcesResponse)
    Q_DISABLE_COPY(DescribeStackResourcesResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
