// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIMENSIONRESPONSE_H
#define QTAWS_DELETEDIMENSIONRESPONSE_H

#include "iotresponse.h"
#include "deletedimensionrequest.h"

namespace QtAws {
namespace IoT {

class DeleteDimensionResponsePrivate;

class QTAWSIOT_EXPORT DeleteDimensionResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteDimensionResponse(const DeleteDimensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDimensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDimensionResponse)
    Q_DISABLE_COPY(DeleteDimensionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
