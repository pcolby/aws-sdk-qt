// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITSUPPRESSIONSRESPONSE_H
#define QTAWS_LISTAUDITSUPPRESSIONSRESPONSE_H

#include "iotresponse.h"
#include "listauditsuppressionsrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditSuppressionsResponsePrivate;

class QTAWSIOT_EXPORT ListAuditSuppressionsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListAuditSuppressionsResponse(const ListAuditSuppressionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAuditSuppressionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuditSuppressionsResponse)
    Q_DISABLE_COPY(ListAuditSuppressionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
