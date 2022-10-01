// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPROACTIVEENGAGEMENTREQUEST_H
#define QTAWS_ENABLEPROACTIVEENGAGEMENTREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class EnableProactiveEngagementRequestPrivate;

class QTAWSSHIELD_EXPORT EnableProactiveEngagementRequest : public ShieldRequest {

public:
    EnableProactiveEngagementRequest(const EnableProactiveEngagementRequest &other);
    EnableProactiveEngagementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableProactiveEngagementRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
