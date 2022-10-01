// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEREQUEST_H
#define QTAWS_GETRULEREQUEST_H

#include "rbinrequest.h"

namespace QtAws {
namespace Rbin {

class GetRuleRequestPrivate;

class QTAWSRBIN_EXPORT GetRuleRequest : public RbinRequest {

public:
    GetRuleRequest(const GetRuleRequest &other);
    GetRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRuleRequest)

};

} // namespace Rbin
} // namespace QtAws

#endif
