// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEDOMAINCONFIGURATIONRESPONSE_H

#include "iotresponse.h"
#include "updatedomainconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class UpdateDomainConfigurationResponsePrivate;

class QTAWSIOT_EXPORT UpdateDomainConfigurationResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateDomainConfigurationResponse(const UpdateDomainConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainConfigurationResponse)
    Q_DISABLE_COPY(UpdateDomainConfigurationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
