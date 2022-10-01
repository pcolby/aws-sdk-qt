// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGREEMENTSRESPONSE_H
#define QTAWS_LISTAGREEMENTSRESPONSE_H

#include "transferresponse.h"
#include "listagreementsrequest.h"

namespace QtAws {
namespace Transfer {

class ListAgreementsResponsePrivate;

class QTAWSTRANSFER_EXPORT ListAgreementsResponse : public TransferResponse {
    Q_OBJECT

public:
    ListAgreementsResponse(const ListAgreementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAgreementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAgreementsResponse)
    Q_DISABLE_COPY(ListAgreementsResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
