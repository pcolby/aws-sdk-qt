// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERSRESPONSE_H
#define QTAWS_LISTSERVERSRESPONSE_H

#include "transferresponse.h"
#include "listserversrequest.h"

namespace QtAws {
namespace Transfer {

class ListServersResponsePrivate;

class QTAWSTRANSFER_EXPORT ListServersResponse : public TransferResponse {
    Q_OBJECT

public:
    ListServersResponse(const ListServersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServersResponse)
    Q_DISABLE_COPY(ListServersResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
