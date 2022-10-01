// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYUSAGERESPONSE_H
#define QTAWS_DESCRIBEIDENTITYUSAGERESPONSE_H

#include "cognitosyncresponse.h"
#include "describeidentityusagerequest.h"

namespace QtAws {
namespace CognitoSync {

class DescribeIdentityUsageResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT DescribeIdentityUsageResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    DescribeIdentityUsageResponse(const DescribeIdentityUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIdentityUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityUsageResponse)
    Q_DISABLE_COPY(DescribeIdentityUsageResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
