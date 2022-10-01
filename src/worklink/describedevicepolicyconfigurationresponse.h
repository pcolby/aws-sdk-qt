// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEPOLICYCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEDEVICEPOLICYCONFIGURATIONRESPONSE_H

#include "worklinkresponse.h"
#include "describedevicepolicyconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeDevicePolicyConfigurationResponsePrivate;

class QTAWSWORKLINK_EXPORT DescribeDevicePolicyConfigurationResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DescribeDevicePolicyConfigurationResponse(const DescribeDevicePolicyConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDevicePolicyConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDevicePolicyConfigurationResponse)
    Q_DISABLE_COPY(DescribeDevicePolicyConfigurationResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
