// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIONTARGETSRESPONSE_H
#define QTAWS_DESCRIBEACTIONTARGETSRESPONSE_H

#include "securityhubresponse.h"
#include "describeactiontargetsrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeActionTargetsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DescribeActionTargetsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DescribeActionTargetsResponse(const DescribeActionTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeActionTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActionTargetsResponse)
    Q_DISABLE_COPY(DescribeActionTargetsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
