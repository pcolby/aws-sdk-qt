// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEV2LOGGINGLEVELRESPONSE_H
#define QTAWS_DELETEV2LOGGINGLEVELRESPONSE_H

#include "iotresponse.h"
#include "deletev2logginglevelrequest.h"

namespace QtAws {
namespace IoT {

class DeleteV2LoggingLevelResponsePrivate;

class QTAWSIOT_EXPORT DeleteV2LoggingLevelResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteV2LoggingLevelResponse(const DeleteV2LoggingLevelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteV2LoggingLevelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteV2LoggingLevelResponse)
    Q_DISABLE_COPY(DeleteV2LoggingLevelResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
