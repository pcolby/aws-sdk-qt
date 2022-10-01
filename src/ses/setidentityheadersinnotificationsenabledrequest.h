// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYHEADERSINNOTIFICATIONSENABLEDREQUEST_H
#define QTAWS_SETIDENTITYHEADERSINNOTIFICATIONSENABLEDREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityHeadersInNotificationsEnabledRequestPrivate;

class QTAWSSES_EXPORT SetIdentityHeadersInNotificationsEnabledRequest : public SesRequest {

public:
    SetIdentityHeadersInNotificationsEnabledRequest(const SetIdentityHeadersInNotificationsEnabledRequest &other);
    SetIdentityHeadersInNotificationsEnabledRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityHeadersInNotificationsEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
