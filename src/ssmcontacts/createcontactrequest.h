// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTREQUEST_H
#define QTAWS_CREATECONTACTREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class CreateContactRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT CreateContactRequest : public SsmContactsRequest {

public:
    CreateContactRequest(const CreateContactRequest &other);
    CreateContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
