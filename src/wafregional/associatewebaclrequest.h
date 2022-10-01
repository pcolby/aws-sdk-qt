// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBACLREQUEST_H
#define QTAWS_ASSOCIATEWEBACLREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class AssociateWebACLRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT AssociateWebACLRequest : public WafRegionalRequest {

public:
    AssociateWebACLRequest(const AssociateWebACLRequest &other);
    AssociateWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
