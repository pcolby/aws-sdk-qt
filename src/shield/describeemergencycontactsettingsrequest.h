// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEMERGENCYCONTACTSETTINGSREQUEST_H
#define QTAWS_DESCRIBEEMERGENCYCONTACTSETTINGSREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DescribeEmergencyContactSettingsRequestPrivate;

class QTAWSSHIELD_EXPORT DescribeEmergencyContactSettingsRequest : public ShieldRequest {

public:
    DescribeEmergencyContactSettingsRequest(const DescribeEmergencyContactSettingsRequest &other);
    DescribeEmergencyContactSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEmergencyContactSettingsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
