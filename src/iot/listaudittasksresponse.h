// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITTASKSRESPONSE_H
#define QTAWS_LISTAUDITTASKSRESPONSE_H

#include "iotresponse.h"
#include "listaudittasksrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditTasksResponsePrivate;

class QTAWSIOT_EXPORT ListAuditTasksResponse : public IoTResponse {
    Q_OBJECT

public:
    ListAuditTasksResponse(const ListAuditTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAuditTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuditTasksResponse)
    Q_DISABLE_COPY(ListAuditTasksResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
