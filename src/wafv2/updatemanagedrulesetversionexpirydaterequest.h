// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMANAGEDRULESETVERSIONEXPIRYDATEREQUEST_H
#define QTAWS_UPDATEMANAGEDRULESETVERSIONEXPIRYDATEREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class UpdateManagedRuleSetVersionExpiryDateRequestPrivate;

class QTAWSWAFV2_EXPORT UpdateManagedRuleSetVersionExpiryDateRequest : public Wafv2Request {

public:
    UpdateManagedRuleSetVersionExpiryDateRequest(const UpdateManagedRuleSetVersionExpiryDateRequest &other);
    UpdateManagedRuleSetVersionExpiryDateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateManagedRuleSetVersionExpiryDateRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
