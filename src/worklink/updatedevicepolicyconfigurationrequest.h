// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEPOLICYCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEDEVICEPOLICYCONFIGURATIONREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateDevicePolicyConfigurationRequestPrivate;

class QTAWSWORKLINK_EXPORT UpdateDevicePolicyConfigurationRequest : public WorkLinkRequest {

public:
    UpdateDevicePolicyConfigurationRequest(const UpdateDevicePolicyConfigurationRequest &other);
    UpdateDevicePolicyConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDevicePolicyConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
