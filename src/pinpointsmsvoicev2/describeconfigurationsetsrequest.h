// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETSREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONSETSREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeConfigurationSetsRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeConfigurationSetsRequest : public PinpointSmsVoiceV2Request {

public:
    DescribeConfigurationSetsRequest(const DescribeConfigurationSetsRequest &other);
    DescribeConfigurationSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationSetsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
