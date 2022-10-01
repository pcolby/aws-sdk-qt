// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPROACTIVEENGAGEMENTREQUEST_H
#define QTAWS_DISABLEPROACTIVEENGAGEMENTREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DisableProactiveEngagementRequestPrivate;

class QTAWSSHIELD_EXPORT DisableProactiveEngagementRequest : public ShieldRequest {

public:
    DisableProactiveEngagementRequest(const DisableProactiveEngagementRequest &other);
    DisableProactiveEngagementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableProactiveEngagementRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
