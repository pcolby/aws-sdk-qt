// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEREQUEST_H
#define QTAWS_UPDATERULEREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRuleRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateRuleRequest : public WafRegionalRequest {

public:
    UpdateRuleRequest(const UpdateRuleRequest &other);
    UpdateRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
