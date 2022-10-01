// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEDOMAINCONFIGURATIONRESPONSE_H

#include "iotresponse.h"
#include "deletedomainconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class DeleteDomainConfigurationResponsePrivate;

class QTAWSIOT_EXPORT DeleteDomainConfigurationResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteDomainConfigurationResponse(const DeleteDomainConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDomainConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainConfigurationResponse)
    Q_DISABLE_COPY(DeleteDomainConfigurationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
