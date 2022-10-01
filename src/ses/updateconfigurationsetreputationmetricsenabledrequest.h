// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETREPUTATIONMETRICSENABLEDREQUEST_H
#define QTAWS_UPDATECONFIGURATIONSETREPUTATIONMETRICSENABLEDREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetReputationMetricsEnabledRequestPrivate;

class QTAWSSES_EXPORT UpdateConfigurationSetReputationMetricsEnabledRequest : public SesRequest {

public:
    UpdateConfigurationSetReputationMetricsEnabledRequest(const UpdateConfigurationSetReputationMetricsEnabledRequest &other);
    UpdateConfigurationSetReputationMetricsEnabledRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetReputationMetricsEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
