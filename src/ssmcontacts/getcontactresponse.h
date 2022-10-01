// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTRESPONSE_H
#define QTAWS_GETCONTACTRESPONSE_H

#include "ssmcontactsresponse.h"
#include "getcontactrequest.h"

namespace QtAws {
namespace SsmContacts {

class GetContactResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT GetContactResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    GetContactResponse(const GetContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactResponse)
    Q_DISABLE_COPY(GetContactResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
