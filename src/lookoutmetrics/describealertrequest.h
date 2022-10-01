// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALERTREQUEST_H
#define QTAWS_DESCRIBEALERTREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAlertRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DescribeAlertRequest : public LookoutMetricsRequest {

public:
    DescribeAlertRequest(const DescribeAlertRequest &other);
    DescribeAlertRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlertRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
