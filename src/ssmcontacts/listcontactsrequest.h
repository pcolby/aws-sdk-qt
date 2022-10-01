// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSREQUEST_H
#define QTAWS_LISTCONTACTSREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListContactsRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT ListContactsRequest : public SsmContactsRequest {

public:
    ListContactsRequest(const ListContactsRequest &other);
    ListContactsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactsRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
