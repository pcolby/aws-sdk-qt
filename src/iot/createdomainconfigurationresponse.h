// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEDOMAINCONFIGURATIONRESPONSE_H

#include "iotresponse.h"
#include "createdomainconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class CreateDomainConfigurationResponsePrivate;

class QTAWSIOT_EXPORT CreateDomainConfigurationResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateDomainConfigurationResponse(const CreateDomainConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDomainConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainConfigurationResponse)
    Q_DISABLE_COPY(CreateDomainConfigurationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
