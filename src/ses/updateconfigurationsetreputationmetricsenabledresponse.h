// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETREPUTATIONMETRICSENABLEDRESPONSE_H
#define QTAWS_UPDATECONFIGURATIONSETREPUTATIONMETRICSENABLEDRESPONSE_H

#include "sesresponse.h"
#include "updateconfigurationsetreputationmetricsenabledrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetReputationMetricsEnabledResponsePrivate;

class QTAWSSES_EXPORT UpdateConfigurationSetReputationMetricsEnabledResponse : public SesResponse {
    Q_OBJECT

public:
    UpdateConfigurationSetReputationMetricsEnabledResponse(const UpdateConfigurationSetReputationMetricsEnabledRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationSetReputationMetricsEnabledRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetReputationMetricsEnabledResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetReputationMetricsEnabledResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
