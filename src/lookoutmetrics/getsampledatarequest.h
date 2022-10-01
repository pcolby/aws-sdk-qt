// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDATAREQUEST_H
#define QTAWS_GETSAMPLEDATAREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetSampleDataRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT GetSampleDataRequest : public LookoutMetricsRequest {

public:
    GetSampleDataRequest(const GetSampleDataRequest &other);
    GetSampleDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSampleDataRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
