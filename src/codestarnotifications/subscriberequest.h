// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBEREQUEST_H
#define QTAWS_SUBSCRIBEREQUEST_H

#include "codestarnotificationsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class SubscribeRequestPrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT SubscribeRequest : public CodestarNotificationsRequest {

public:
    SubscribeRequest(const SubscribeRequest &other);
    SubscribeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
