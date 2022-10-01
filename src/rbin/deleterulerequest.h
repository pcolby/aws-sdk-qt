// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEREQUEST_H
#define QTAWS_DELETERULEREQUEST_H

#include "rbinrequest.h"

namespace QtAws {
namespace Rbin {

class DeleteRuleRequestPrivate;

class QTAWSRBIN_EXPORT DeleteRuleRequest : public RbinRequest {

public:
    DeleteRuleRequest(const DeleteRuleRequest &other);
    DeleteRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRuleRequest)

};

} // namespace Rbin
} // namespace QtAws

#endif
