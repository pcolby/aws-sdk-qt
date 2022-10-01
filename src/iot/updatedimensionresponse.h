// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIMENSIONRESPONSE_H
#define QTAWS_UPDATEDIMENSIONRESPONSE_H

#include "iotresponse.h"
#include "updatedimensionrequest.h"

namespace QtAws {
namespace IoT {

class UpdateDimensionResponsePrivate;

class QTAWSIOT_EXPORT UpdateDimensionResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateDimensionResponse(const UpdateDimensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDimensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDimensionResponse)
    Q_DISABLE_COPY(UpdateDimensionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
