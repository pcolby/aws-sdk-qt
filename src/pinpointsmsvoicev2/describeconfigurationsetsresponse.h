// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETSRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONSETSRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "describeconfigurationsetsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeConfigurationSetsResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeConfigurationSetsResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DescribeConfigurationSetsResponse(const DescribeConfigurationSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationSetsResponse)
    Q_DISABLE_COPY(DescribeConfigurationSetsResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
