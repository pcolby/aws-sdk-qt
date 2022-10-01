// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTSUBSCRIPTIONRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTSUBSCRIPTIONRESPONSE_H

#include "quicksightresponse.h"
#include "describeaccountsubscriptionrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountSubscriptionResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAccountSubscriptionResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeAccountSubscriptionResponse(const DescribeAccountSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountSubscriptionResponse)
    Q_DISABLE_COPY(DescribeAccountSubscriptionResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
