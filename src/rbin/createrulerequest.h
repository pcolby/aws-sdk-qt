// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEREQUEST_H
#define QTAWS_CREATERULEREQUEST_H

#include "rbinrequest.h"

namespace QtAws {
namespace Rbin {

class CreateRuleRequestPrivate;

class QTAWSRBIN_EXPORT CreateRuleRequest : public RbinRequest {

public:
    CreateRuleRequest(const CreateRuleRequest &other);
    CreateRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRuleRequest)

};

} // namespace Rbin
} // namespace QtAws

#endif
