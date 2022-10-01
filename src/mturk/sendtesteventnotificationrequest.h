// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTESTEVENTNOTIFICATIONREQUEST_H
#define QTAWS_SENDTESTEVENTNOTIFICATIONREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class SendTestEventNotificationRequestPrivate;

class QTAWSMTURK_EXPORT SendTestEventNotificationRequest : public MTurkRequest {

public:
    SendTestEventNotificationRequest(const SendTestEventNotificationRequest &other);
    SendTestEventNotificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTestEventNotificationRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
