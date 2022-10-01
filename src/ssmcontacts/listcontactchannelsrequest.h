// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTCHANNELSREQUEST_H
#define QTAWS_LISTCONTACTCHANNELSREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListContactChannelsRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT ListContactChannelsRequest : public SsmContactsRequest {

public:
    ListContactChannelsRequest(const ListContactChannelsRequest &other);
    ListContactChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactChannelsRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
