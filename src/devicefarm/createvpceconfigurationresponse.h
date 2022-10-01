// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCECONFIGURATIONRESPONSE_H
#define QTAWS_CREATEVPCECONFIGURATIONRESPONSE_H

#include "devicefarmresponse.h"
#include "createvpceconfigurationrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateVPCEConfigurationResponsePrivate;

class QTAWSDEVICEFARM_EXPORT CreateVPCEConfigurationResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    CreateVPCEConfigurationResponse(const CreateVPCEConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVPCEConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVPCEConfigurationResponse)
    Q_DISABLE_COPY(CreateVPCEConfigurationResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
