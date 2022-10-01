// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONRULERESPONSE_H
#define QTAWS_DESCRIBENOTIFICATIONRULERESPONSE_H

#include "codestarnotificationsresponse.h"
#include "describenotificationrulerequest.h"

namespace QtAws {
namespace CodestarNotifications {

class DescribeNotificationRuleResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT DescribeNotificationRuleResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    DescribeNotificationRuleResponse(const DescribeNotificationRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNotificationRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotificationRuleResponse)
    Q_DISABLE_COPY(DescribeNotificationRuleResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
