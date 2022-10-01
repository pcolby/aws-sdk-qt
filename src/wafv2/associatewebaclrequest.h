// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBACLREQUEST_H
#define QTAWS_ASSOCIATEWEBACLREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class AssociateWebACLRequestPrivate;

class QTAWSWAFV2_EXPORT AssociateWebACLRequest : public Wafv2Request {

public:
    AssociateWebACLRequest(const AssociateWebACLRequest &other);
    AssociateWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
