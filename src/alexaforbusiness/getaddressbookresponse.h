// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADDRESSBOOKRESPONSE_H
#define QTAWS_GETADDRESSBOOKRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "getaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetAddressBookResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetAddressBookResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    GetAddressBookResponse(const GetAddressBookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAddressBookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAddressBookResponse)
    Q_DISABLE_COPY(GetAddressBookResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
