// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALERTRESPONSE_H
#define QTAWS_CREATEALERTRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "createalertrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateAlertResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT CreateAlertResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    CreateAlertResponse(const CreateAlertRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAlertRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAlertResponse)
    Q_DISABLE_COPY(CreateAlertResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
