// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTCHANNELREQUEST_H
#define QTAWS_GETCONTACTCHANNELREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class GetContactChannelRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT GetContactChannelRequest : public SsmContactsRequest {

public:
    GetContactChannelRequest(const GetContactChannelRequest &other);
    GetContactChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
