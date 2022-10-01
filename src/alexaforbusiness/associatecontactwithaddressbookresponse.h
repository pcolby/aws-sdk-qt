// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONTACTWITHADDRESSBOOKRESPONSE_H
#define QTAWS_ASSOCIATECONTACTWITHADDRESSBOOKRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "associatecontactwithaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateContactWithAddressBookResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateContactWithAddressBookResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    AssociateContactWithAddressBookResponse(const AssociateContactWithAddressBookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateContactWithAddressBookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateContactWithAddressBookResponse)
    Q_DISABLE_COPY(AssociateContactWithAddressBookResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
