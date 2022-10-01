// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIPTIONRESPONSE_H
#define QTAWS_DESCRIBESUBSCRIPTIONRESPONSE_H

#include "shieldresponse.h"
#include "describesubscriptionrequest.h"

namespace QtAws {
namespace Shield {

class DescribeSubscriptionResponsePrivate;

class QTAWSSHIELD_EXPORT DescribeSubscriptionResponse : public ShieldResponse {
    Q_OBJECT

public:
    DescribeSubscriptionResponse(const DescribeSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubscriptionResponse)
    Q_DISABLE_COPY(DescribeSubscriptionResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
