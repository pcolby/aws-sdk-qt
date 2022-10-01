// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCERESPONSE_H
#define QTAWS_DESCRIBESTACKRESOURCERESPONSE_H

#include "cloudformationresponse.h"
#include "describestackresourcerequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourceResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackResourceResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeStackResourceResponse(const DescribeStackResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackResourceResponse)
    Q_DISABLE_COPY(DescribeStackResourceResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
