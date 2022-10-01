// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALERTREQUEST_H
#define QTAWS_DELETEALERTREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DeleteAlertRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DeleteAlertRequest : public LookoutMetricsRequest {

public:
    DeleteAlertRequest(const DeleteAlertRequest &other);
    DeleteAlertRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlertRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
