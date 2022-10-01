// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYGROUPREQUEST_H
#define QTAWS_GETANOMALYGROUPREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetAnomalyGroupRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT GetAnomalyGroupRequest : public LookoutMetricsRequest {

public:
    GetAnomalyGroupRequest(const GetAnomalyGroupRequest &other);
    GetAnomalyGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnomalyGroupRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
