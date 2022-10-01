// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSREQUEST_H
#define QTAWS_LISTAPPLICATIONSREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class ListApplicationsRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT ListApplicationsRequest : public KinesisAnalyticsRequest {

public:
    ListApplicationsRequest(const ListApplicationsRequest &other);
    ListApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationsRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
