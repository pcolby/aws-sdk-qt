// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAQUALITYMETRICSREQUEST_H
#define QTAWS_GETDATAQUALITYMETRICSREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetDataQualityMetricsRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT GetDataQualityMetricsRequest : public LookoutMetricsRequest {

public:
    GetDataQualityMetricsRequest(const GetDataQualityMetricsRequest &other);
    GetDataQualityMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataQualityMetricsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
