// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHATCONTACTREQUEST_H
#define QTAWS_STARTCHATCONTACTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class StartChatContactRequestPrivate;

class QTAWSCONNECT_EXPORT StartChatContactRequest : public ConnectRequest {

public:
    StartChatContactRequest(const StartChatContactRequest &other);
    StartChatContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartChatContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
