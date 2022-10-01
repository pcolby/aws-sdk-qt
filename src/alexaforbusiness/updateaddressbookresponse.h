// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADDRESSBOOKRESPONSE_H
#define QTAWS_UPDATEADDRESSBOOKRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "updateaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateAddressBookResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateAddressBookResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    UpdateAddressBookResponse(const UpdateAddressBookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAddressBookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAddressBookResponse)
    Q_DISABLE_COPY(UpdateAddressBookResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
