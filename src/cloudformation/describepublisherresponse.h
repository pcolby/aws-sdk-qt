// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLISHERRESPONSE_H
#define QTAWS_DESCRIBEPUBLISHERRESPONSE_H

#include "cloudformationresponse.h"
#include "describepublisherrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribePublisherResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribePublisherResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribePublisherResponse(const DescribePublisherRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePublisherRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePublisherResponse)
    Q_DISABLE_COPY(DescribePublisherResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
