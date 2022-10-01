// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESREQUEST_H
#define QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutEmailIdentityFeedbackAttributesRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutEmailIdentityFeedbackAttributesRequest : public PinpointEmailRequest {

public:
    PutEmailIdentityFeedbackAttributesRequest(const PutEmailIdentityFeedbackAttributesRequest &other);
    PutEmailIdentityFeedbackAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailIdentityFeedbackAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
