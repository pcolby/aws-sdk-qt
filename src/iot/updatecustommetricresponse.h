// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMMETRICRESPONSE_H
#define QTAWS_UPDATECUSTOMMETRICRESPONSE_H

#include "iotresponse.h"
#include "updatecustommetricrequest.h"

namespace QtAws {
namespace IoT {

class UpdateCustomMetricResponsePrivate;

class QTAWSIOT_EXPORT UpdateCustomMetricResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateCustomMetricResponse(const UpdateCustomMetricRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCustomMetricRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomMetricResponse)
    Q_DISABLE_COPY(UpdateCustomMetricResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
