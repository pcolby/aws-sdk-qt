// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETYPEREGISTRATIONRESPONSE_H
#define QTAWS_DESCRIBETYPEREGISTRATIONRESPONSE_H

#include "cloudformationresponse.h"
#include "describetyperegistrationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeTypeRegistrationResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeTypeRegistrationResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeTypeRegistrationResponse(const DescribeTypeRegistrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTypeRegistrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTypeRegistrationResponse)
    Q_DISABLE_COPY(DescribeTypeRegistrationResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
