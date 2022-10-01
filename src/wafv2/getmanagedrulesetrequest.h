// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDRULESETREQUEST_H
#define QTAWS_GETMANAGEDRULESETREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetManagedRuleSetRequestPrivate;

class QTAWSWAFV2_EXPORT GetManagedRuleSetRequest : public Wafv2Request {

public:
    GetManagedRuleSetRequest(const GetManagedRuleSetRequest &other);
    GetManagedRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetManagedRuleSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
