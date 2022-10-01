// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTMITIGATIONACTIONSTASKSRESPONSE_H
#define QTAWS_LISTDETECTMITIGATIONACTIONSTASKSRESPONSE_H

#include "iotresponse.h"
#include "listdetectmitigationactionstasksrequest.h"

namespace QtAws {
namespace IoT {

class ListDetectMitigationActionsTasksResponsePrivate;

class QTAWSIOT_EXPORT ListDetectMitigationActionsTasksResponse : public IoTResponse {
    Q_OBJECT

public:
    ListDetectMitigationActionsTasksResponse(const ListDetectMitigationActionsTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDetectMitigationActionsTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDetectMitigationActionsTasksResponse)
    Q_DISABLE_COPY(ListDetectMitigationActionsTasksResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
