// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDRULESETVERSIONSREQUEST_H
#define QTAWS_PUTMANAGEDRULESETVERSIONSREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class PutManagedRuleSetVersionsRequestPrivate;

class QTAWSWAFV2_EXPORT PutManagedRuleSetVersionsRequest : public Wafv2Request {

public:
    PutManagedRuleSetVersionsRequest(const PutManagedRuleSetVersionsRequest &other);
    PutManagedRuleSetVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutManagedRuleSetVersionsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
