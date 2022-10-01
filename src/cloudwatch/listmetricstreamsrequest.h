// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSTREAMSREQUEST_H
#define QTAWS_LISTMETRICSTREAMSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListMetricStreamsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT ListMetricStreamsRequest : public CloudWatchRequest {

public:
    ListMetricStreamsRequest(const ListMetricStreamsRequest &other);
    ListMetricStreamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMetricStreamsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
