// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANGESETHOOKSRESPONSE_H
#define QTAWS_DESCRIBECHANGESETHOOKSRESPONSE_H

#include "cloudformationresponse.h"
#include "describechangesethooksrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeChangeSetHooksResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeChangeSetHooksResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeChangeSetHooksResponse(const DescribeChangeSetHooksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChangeSetHooksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChangeSetHooksResponse)
    Q_DISABLE_COPY(DescribeChangeSetHooksResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
