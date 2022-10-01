// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERCONTACTRESPONSE_H
#define QTAWS_TRANSFERCONTACTRESPONSE_H

#include "connectresponse.h"
#include "transfercontactrequest.h"

namespace QtAws {
namespace Connect {

class TransferContactResponsePrivate;

class QTAWSCONNECT_EXPORT TransferContactResponse : public ConnectResponse {
    Q_OBJECT

public:
    TransferContactResponse(const TransferContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TransferContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransferContactResponse)
    Q_DISABLE_COPY(TransferContactResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
