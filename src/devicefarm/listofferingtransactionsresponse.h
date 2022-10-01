// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGTRANSACTIONSRESPONSE_H
#define QTAWS_LISTOFFERINGTRANSACTIONSRESPONSE_H

#include "devicefarmresponse.h"
#include "listofferingtransactionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListOfferingTransactionsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListOfferingTransactionsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListOfferingTransactionsResponse(const ListOfferingTransactionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOfferingTransactionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOfferingTransactionsResponse)
    Q_DISABLE_COPY(ListOfferingTransactionsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
