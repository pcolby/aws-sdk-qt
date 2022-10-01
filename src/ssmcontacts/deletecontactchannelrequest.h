// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTCHANNELREQUEST_H
#define QTAWS_DELETECONTACTCHANNELREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class DeleteContactChannelRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT DeleteContactChannelRequest : public SsmContactsRequest {

public:
    DeleteContactChannelRequest(const DeleteContactChannelRequest &other);
    DeleteContactChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
