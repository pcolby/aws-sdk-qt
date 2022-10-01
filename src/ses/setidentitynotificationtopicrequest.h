// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYNOTIFICATIONTOPICREQUEST_H
#define QTAWS_SETIDENTITYNOTIFICATIONTOPICREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityNotificationTopicRequestPrivate;

class QTAWSSES_EXPORT SetIdentityNotificationTopicRequest : public SesRequest {

public:
    SetIdentityNotificationTopicRequest(const SetIdentityNotificationTopicRequest &other);
    SetIdentityNotificationTopicRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityNotificationTopicRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
