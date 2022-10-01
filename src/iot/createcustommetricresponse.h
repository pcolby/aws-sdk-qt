// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMMETRICRESPONSE_H
#define QTAWS_CREATECUSTOMMETRICRESPONSE_H

#include "iotresponse.h"
#include "createcustommetricrequest.h"

namespace QtAws {
namespace IoT {

class CreateCustomMetricResponsePrivate;

class QTAWSIOT_EXPORT CreateCustomMetricResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateCustomMetricResponse(const CreateCustomMetricRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomMetricRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomMetricResponse)
    Q_DISABLE_COPY(CreateCustomMetricResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
