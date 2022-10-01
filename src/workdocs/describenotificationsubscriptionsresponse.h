// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONSUBSCRIPTIONSRESPONSE_H
#define QTAWS_DESCRIBENOTIFICATIONSUBSCRIPTIONSRESPONSE_H

#include "workdocsresponse.h"
#include "describenotificationsubscriptionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeNotificationSubscriptionsResponsePrivate;

class QTAWSWORKDOCS_EXPORT DescribeNotificationSubscriptionsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeNotificationSubscriptionsResponse(const DescribeNotificationSubscriptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNotificationSubscriptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotificationSubscriptionsResponse)
    Q_DISABLE_COPY(DescribeNotificationSubscriptionsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
