// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEREQUEST_H
#define QTAWS_UPDATERULEREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class UpdateRuleRequestPrivate;

class QTAWSWAF_EXPORT UpdateRuleRequest : public WafRequest {

public:
    UpdateRuleRequest(const UpdateRuleRequest &other);
    UpdateRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
