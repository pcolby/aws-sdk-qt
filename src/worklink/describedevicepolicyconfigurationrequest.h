// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEPOLICYCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEDEVICEPOLICYCONFIGURATIONREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeDevicePolicyConfigurationRequestPrivate;

class QTAWSWORKLINK_EXPORT DescribeDevicePolicyConfigurationRequest : public WorkLinkRequest {

public:
    DescribeDevicePolicyConfigurationRequest(const DescribeDevicePolicyConfigurationRequest &other);
    DescribeDevicePolicyConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDevicePolicyConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
