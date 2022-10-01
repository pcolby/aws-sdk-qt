// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANGESETRESPONSE_H
#define QTAWS_DESCRIBECHANGESETRESPONSE_H

#include "cloudformationresponse.h"
#include "describechangesetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeChangeSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeChangeSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeChangeSetResponse(const DescribeChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChangeSetResponse)
    Q_DISABLE_COPY(DescribeChangeSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
