// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESREQUEST_H
#define QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutEmailIdentityDkimAttributesRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutEmailIdentityDkimAttributesRequest : public PinpointEmailRequest {

public:
    PutEmailIdentityDkimAttributesRequest(const PutEmailIdentityDkimAttributesRequest &other);
    PutEmailIdentityDkimAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailIdentityDkimAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
