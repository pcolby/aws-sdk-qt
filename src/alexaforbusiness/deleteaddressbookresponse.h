// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADDRESSBOOKRESPONSE_H
#define QTAWS_DELETEADDRESSBOOKRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deleteaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteAddressBookResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteAddressBookResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteAddressBookResponse(const DeleteAddressBookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAddressBookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAddressBookResponse)
    Q_DISABLE_COPY(DeleteAddressBookResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
