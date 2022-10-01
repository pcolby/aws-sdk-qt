// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASTOREREQUEST_H
#define QTAWS_DESCRIBEDATASTOREREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribeDatastoreRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT DescribeDatastoreRequest : public IoTAnalyticsRequest {

public:
    DescribeDatastoreRequest(const DescribeDatastoreRequest &other);
    DescribeDatastoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatastoreRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
