// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONTACTFROMADDRESSBOOKRESPONSE_H
#define QTAWS_DISASSOCIATECONTACTFROMADDRESSBOOKRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "disassociatecontactfromaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateContactFromAddressBookResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DisassociateContactFromAddressBookResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DisassociateContactFromAddressBookResponse(const DisassociateContactFromAddressBookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateContactFromAddressBookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateContactFromAddressBookResponse)
    Q_DISABLE_COPY(DisassociateContactFromAddressBookResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
