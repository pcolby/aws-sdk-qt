// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTOUTBOUNDVOICECONTACTREQUEST_H
#define QTAWS_STARTOUTBOUNDVOICECONTACTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class StartOutboundVoiceContactRequestPrivate;

class QTAWSCONNECT_EXPORT StartOutboundVoiceContactRequest : public ConnectRequest {

public:
    StartOutboundVoiceContactRequest(const StartOutboundVoiceContactRequest &other);
    StartOutboundVoiceContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOutboundVoiceContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
