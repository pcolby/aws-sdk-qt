// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATECONTACTCHANNELREQUEST_H
#define QTAWS_DEACTIVATECONTACTCHANNELREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class DeactivateContactChannelRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT DeactivateContactChannelRequest : public SsmContactsRequest {

public:
    DeactivateContactChannelRequest(const DeactivateContactChannelRequest &other);
    DeactivateContactChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
