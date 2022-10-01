// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKINSTANCERESPONSE_H
#define QTAWS_DESCRIBESTACKINSTANCERESPONSE_H

#include "cloudformationresponse.h"
#include "describestackinstancerequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackInstanceResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackInstanceResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeStackInstanceResponse(const DescribeStackInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackInstanceResponse)
    Q_DISABLE_COPY(DescribeStackInstanceResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
