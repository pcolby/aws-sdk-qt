// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEVENTREQUEST_H
#define QTAWS_SENDEVENTREQUEST_H

#include "ivschatrequest.h"

namespace QtAws {
namespace IvsChat {

class SendEventRequestPrivate;

class QTAWSIVSCHAT_EXPORT SendEventRequest : public IvsChatRequest {

public:
    SendEventRequest(const SendEventRequest &other);
    SendEventRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendEventRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
