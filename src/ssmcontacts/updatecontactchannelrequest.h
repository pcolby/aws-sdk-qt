// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTCHANNELREQUEST_H
#define QTAWS_UPDATECONTACTCHANNELREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class UpdateContactChannelRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT UpdateContactChannelRequest : public SsmContactsRequest {

public:
    UpdateContactChannelRequest(const UpdateContactChannelRequest &other);
    UpdateContactChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
