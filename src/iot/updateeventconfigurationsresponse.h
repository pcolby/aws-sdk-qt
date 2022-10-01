// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTCONFIGURATIONSRESPONSE_H
#define QTAWS_UPDATEEVENTCONFIGURATIONSRESPONSE_H

#include "iotresponse.h"
#include "updateeventconfigurationsrequest.h"

namespace QtAws {
namespace IoT {

class UpdateEventConfigurationsResponsePrivate;

class QTAWSIOT_EXPORT UpdateEventConfigurationsResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateEventConfigurationsResponse(const UpdateEventConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventConfigurationsResponse)
    Q_DISABLE_COPY(UpdateEventConfigurationsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
