// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCECONFIGURATIONRESPONSE_H
#define QTAWS_GETVPCECONFIGURATIONRESPONSE_H

#include "devicefarmresponse.h"
#include "getvpceconfigurationrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetVPCEConfigurationResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetVPCEConfigurationResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetVPCEConfigurationResponse(const GetVPCEConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVPCEConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVPCEConfigurationResponse)
    Q_DISABLE_COPY(GetVPCEConfigurationResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
