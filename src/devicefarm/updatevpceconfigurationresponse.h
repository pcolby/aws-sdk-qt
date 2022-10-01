// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCECONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEVPCECONFIGURATIONRESPONSE_H

#include "devicefarmresponse.h"
#include "updatevpceconfigurationrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateVPCEConfigurationResponsePrivate;

class QTAWSDEVICEFARM_EXPORT UpdateVPCEConfigurationResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    UpdateVPCEConfigurationResponse(const UpdateVPCEConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVPCEConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVPCEConfigurationResponse)
    Q_DISABLE_COPY(UpdateVPCEConfigurationResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
