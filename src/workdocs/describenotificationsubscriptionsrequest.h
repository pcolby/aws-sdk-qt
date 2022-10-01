// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONSUBSCRIPTIONSREQUEST_H
#define QTAWS_DESCRIBENOTIFICATIONSUBSCRIPTIONSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeNotificationSubscriptionsRequestPrivate;

class QTAWSWORKDOCS_EXPORT DescribeNotificationSubscriptionsRequest : public WorkDocsRequest {

public:
    DescribeNotificationSubscriptionsRequest(const DescribeNotificationSubscriptionsRequest &other);
    DescribeNotificationSubscriptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotificationSubscriptionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
