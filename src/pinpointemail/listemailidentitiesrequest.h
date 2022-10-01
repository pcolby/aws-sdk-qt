// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEMAILIDENTITIESREQUEST_H
#define QTAWS_LISTEMAILIDENTITIESREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListEmailIdentitiesRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT ListEmailIdentitiesRequest : public PinpointEmailRequest {

public:
    ListEmailIdentitiesRequest(const ListEmailIdentitiesRequest &other);
    ListEmailIdentitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEmailIdentitiesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
