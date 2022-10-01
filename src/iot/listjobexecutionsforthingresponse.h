// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBEXECUTIONSFORTHINGRESPONSE_H
#define QTAWS_LISTJOBEXECUTIONSFORTHINGRESPONSE_H

#include "iotresponse.h"
#include "listjobexecutionsforthingrequest.h"

namespace QtAws {
namespace IoT {

class ListJobExecutionsForThingResponsePrivate;

class QTAWSIOT_EXPORT ListJobExecutionsForThingResponse : public IoTResponse {
    Q_OBJECT

public:
    ListJobExecutionsForThingResponse(const ListJobExecutionsForThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJobExecutionsForThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobExecutionsForThingResponse)
    Q_DISABLE_COPY(ListJobExecutionsForThingResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
