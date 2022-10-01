// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSESRESPONSE_H
#define QTAWS_LISTACCESSESRESPONSE_H

#include "transferresponse.h"
#include "listaccessesrequest.h"

namespace QtAws {
namespace Transfer {

class ListAccessesResponsePrivate;

class QTAWSTRANSFER_EXPORT ListAccessesResponse : public TransferResponse {
    Q_OBJECT

public:
    ListAccessesResponse(const ListAccessesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccessesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessesResponse)
    Q_DISABLE_COPY(ListAccessesResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
