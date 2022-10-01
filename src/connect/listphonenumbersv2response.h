// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSV2RESPONSE_H
#define QTAWS_LISTPHONENUMBERSV2RESPONSE_H

#include "connectresponse.h"
#include "listphonenumbersv2request.h"

namespace QtAws {
namespace Connect {

class ListPhoneNumbersV2ResponsePrivate;

class QTAWSCONNECT_EXPORT ListPhoneNumbersV2Response : public ConnectResponse {
    Q_OBJECT

public:
    ListPhoneNumbersV2Response(const ListPhoneNumbersV2Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPhoneNumbersV2Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPhoneNumbersV2Response)
    Q_DISABLE_COPY(ListPhoneNumbersV2Response)

};

} // namespace Connect
} // namespace QtAws

#endif
