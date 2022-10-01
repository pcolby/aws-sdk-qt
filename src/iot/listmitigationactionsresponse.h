// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMITIGATIONACTIONSRESPONSE_H
#define QTAWS_LISTMITIGATIONACTIONSRESPONSE_H

#include "iotresponse.h"
#include "listmitigationactionsrequest.h"

namespace QtAws {
namespace IoT {

class ListMitigationActionsResponsePrivate;

class QTAWSIOT_EXPORT ListMitigationActionsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListMitigationActionsResponse(const ListMitigationActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMitigationActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMitigationActionsResponse)
    Q_DISABLE_COPY(ListMitigationActionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
