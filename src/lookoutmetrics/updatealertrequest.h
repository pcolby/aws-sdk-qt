// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALERTREQUEST_H
#define QTAWS_UPDATEALERTREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateAlertRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT UpdateAlertRequest : public LookoutMetricsRequest {

public:
    UpdateAlertRequest(const UpdateAlertRequest &other);
    UpdateAlertRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAlertRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
