// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDRULESETSREQUEST_H
#define QTAWS_LISTMANAGEDRULESETSREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class ListManagedRuleSetsRequestPrivate;

class QTAWSWAFV2_EXPORT ListManagedRuleSetsRequest : public Wafv2Request {

public:
    ListManagedRuleSetsRequest(const ListManagedRuleSetsRequest &other);
    ListManagedRuleSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedRuleSetsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
