// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTV2LOGGINGLEVELSRESPONSE_H
#define QTAWS_LISTV2LOGGINGLEVELSRESPONSE_H

#include "iotresponse.h"
#include "listv2logginglevelsrequest.h"

namespace QtAws {
namespace IoT {

class ListV2LoggingLevelsResponsePrivate;

class QTAWSIOT_EXPORT ListV2LoggingLevelsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListV2LoggingLevelsResponse(const ListV2LoggingLevelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListV2LoggingLevelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListV2LoggingLevelsResponse)
    Q_DISABLE_COPY(ListV2LoggingLevelsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
