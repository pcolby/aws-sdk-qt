// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTRESPONSE_H
#define QTAWS_CREATECONTACTRESPONSE_H

#include "ssmcontactsresponse.h"
#include "createcontactrequest.h"

namespace QtAws {
namespace SsmContacts {

class CreateContactResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT CreateContactResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    CreateContactResponse(const CreateContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactResponse)
    Q_DISABLE_COPY(CreateContactResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
