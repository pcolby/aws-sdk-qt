// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMETRICSETREQUEST_H
#define QTAWS_CREATEMETRICSETREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateMetricSetRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT CreateMetricSetRequest : public LookoutMetricsRequest {

public:
    CreateMetricSetRequest(const CreateMetricSetRequest &other);
    CreateMetricSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMetricSetRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
