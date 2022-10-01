// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITMITIGATIONACTIONSEXECUTIONSRESPONSE_H
#define QTAWS_LISTAUDITMITIGATIONACTIONSEXECUTIONSRESPONSE_H

#include "iotresponse.h"
#include "listauditmitigationactionsexecutionsrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditMitigationActionsExecutionsResponsePrivate;

class QTAWSIOT_EXPORT ListAuditMitigationActionsExecutionsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListAuditMitigationActionsExecutionsResponse(const ListAuditMitigationActionsExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAuditMitigationActionsExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuditMitigationActionsExecutionsResponse)
    Q_DISABLE_COPY(ListAuditMitigationActionsExecutionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
