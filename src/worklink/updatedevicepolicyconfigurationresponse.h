// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEPOLICYCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEDEVICEPOLICYCONFIGURATIONRESPONSE_H

#include "worklinkresponse.h"
#include "updatedevicepolicyconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateDevicePolicyConfigurationResponsePrivate;

class QTAWSWORKLINK_EXPORT UpdateDevicePolicyConfigurationResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    UpdateDevicePolicyConfigurationResponse(const UpdateDevicePolicyConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDevicePolicyConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDevicePolicyConfigurationResponse)
    Q_DISABLE_COPY(UpdateDevicePolicyConfigurationResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
