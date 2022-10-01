// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTMITIGATIONACTIONSEXECUTIONSRESPONSE_H
#define QTAWS_LISTDETECTMITIGATIONACTIONSEXECUTIONSRESPONSE_H

#include "iotresponse.h"
#include "listdetectmitigationactionsexecutionsrequest.h"

namespace QtAws {
namespace IoT {

class ListDetectMitigationActionsExecutionsResponsePrivate;

class QTAWSIOT_EXPORT ListDetectMitigationActionsExecutionsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListDetectMitigationActionsExecutionsResponse(const ListDetectMitigationActionsExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDetectMitigationActionsExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDetectMitigationActionsExecutionsResponse)
    Q_DISABLE_COPY(ListDetectMitigationActionsExecutionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
