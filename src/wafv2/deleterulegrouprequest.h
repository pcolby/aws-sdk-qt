// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPREQUEST_H
#define QTAWS_DELETERULEGROUPREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class DeleteRuleGroupRequestPrivate;

class QTAWSWAFV2_EXPORT DeleteRuleGroupRequest : public Wafv2Request {

public:
    DeleteRuleGroupRequest(const DeleteRuleGroupRequest &other);
    DeleteRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
