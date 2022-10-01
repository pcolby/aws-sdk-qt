// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDRULEMANAGEDKEYSREQUEST_H
#define QTAWS_GETRATEBASEDRULEMANAGEDKEYSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetRateBasedRuleManagedKeysRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetRateBasedRuleManagedKeysRequest : public WafRegionalRequest {

public:
    GetRateBasedRuleManagedKeysRequest(const GetRateBasedRuleManagedKeysRequest &other);
    GetRateBasedRuleManagedKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRateBasedRuleManagedKeysRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
