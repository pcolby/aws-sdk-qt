// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIMENSIONRESPONSE_H
#define QTAWS_CREATEDIMENSIONRESPONSE_H

#include "iotresponse.h"
#include "createdimensionrequest.h"

namespace QtAws {
namespace IoT {

class CreateDimensionResponsePrivate;

class QTAWSIOT_EXPORT CreateDimensionResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateDimensionResponse(const CreateDimensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDimensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDimensionResponse)
    Q_DISABLE_COPY(CreateDimensionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
