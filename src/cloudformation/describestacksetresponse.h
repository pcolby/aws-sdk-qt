// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSETRESPONSE_H
#define QTAWS_DESCRIBESTACKSETRESPONSE_H

#include "cloudformationresponse.h"
#include "describestacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeStackSetResponse(const DescribeStackSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackSetResponse)
    Q_DISABLE_COPY(DescribeStackSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
