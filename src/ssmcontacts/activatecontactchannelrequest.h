// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATECONTACTCHANNELREQUEST_H
#define QTAWS_ACTIVATECONTACTCHANNELREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ActivateContactChannelRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT ActivateContactChannelRequest : public SsmContactsRequest {

public:
    ActivateContactChannelRequest(const ActivateContactChannelRequest &other);
    ActivateContactChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateContactChannelRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
