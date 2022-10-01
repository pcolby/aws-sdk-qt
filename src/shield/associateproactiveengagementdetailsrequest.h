// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPROACTIVEENGAGEMENTDETAILSREQUEST_H
#define QTAWS_ASSOCIATEPROACTIVEENGAGEMENTDETAILSREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class AssociateProactiveEngagementDetailsRequestPrivate;

class QTAWSSHIELD_EXPORT AssociateProactiveEngagementDetailsRequest : public ShieldRequest {

public:
    AssociateProactiveEngagementDetailsRequest(const AssociateProactiveEngagementDetailsRequest &other);
    AssociateProactiveEngagementDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateProactiveEngagementDetailsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
