// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSRESPONSE_H
#define QTAWS_LISTPHONENUMBERSRESPONSE_H

#include "connectresponse.h"
#include "listphonenumbersrequest.h"

namespace QtAws {
namespace Connect {

class ListPhoneNumbersResponsePrivate;

class QTAWSCONNECT_EXPORT ListPhoneNumbersResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListPhoneNumbersResponse(const ListPhoneNumbersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPhoneNumbersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPhoneNumbersResponse)
    Q_DISABLE_COPY(ListPhoneNumbersResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
