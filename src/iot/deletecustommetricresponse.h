// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMMETRICRESPONSE_H
#define QTAWS_DELETECUSTOMMETRICRESPONSE_H

#include "iotresponse.h"
#include "deletecustommetricrequest.h"

namespace QtAws {
namespace IoT {

class DeleteCustomMetricResponsePrivate;

class QTAWSIOT_EXPORT DeleteCustomMetricResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteCustomMetricResponse(const DeleteCustomMetricRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomMetricRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomMetricResponse)
    Q_DISABLE_COPY(DeleteCustomMetricResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
