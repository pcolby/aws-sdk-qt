// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPOOLUSAGERESPONSE_H
#define QTAWS_DESCRIBEIDENTITYPOOLUSAGERESPONSE_H

#include "cognitosyncresponse.h"
#include "describeidentitypoolusagerequest.h"

namespace QtAws {
namespace CognitoSync {

class DescribeIdentityPoolUsageResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT DescribeIdentityPoolUsageResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    DescribeIdentityPoolUsageResponse(const DescribeIdentityPoolUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIdentityPoolUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityPoolUsageResponse)
    Q_DISABLE_COPY(DescribeIdentityPoolUsageResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
