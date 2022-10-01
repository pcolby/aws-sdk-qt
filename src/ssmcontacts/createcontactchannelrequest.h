// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTCHANNELREQUEST_H
#define QTAWS_CREATECONTACTCHANNELREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class CreateContactChannelRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT CreateContactChannelRequest : public SsmContactsRequest {

public:
    CreateContactChannelRequest(const CreateContactChannelRequest &other);
    CreateContactChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
