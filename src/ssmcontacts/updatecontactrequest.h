// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTREQUEST_H
#define QTAWS_UPDATECONTACTREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class UpdateContactRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT UpdateContactRequest : public SsmContactsRequest {

public:
    UpdateContactRequest(const UpdateContactRequest &other);
    UpdateContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
