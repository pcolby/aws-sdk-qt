// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIZECONSTRAINTSETSREQUEST_H
#define QTAWS_LISTSIZECONSTRAINTSETSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListSizeConstraintSetsRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListSizeConstraintSetsRequest : public WafRegionalRequest {

public:
    ListSizeConstraintSetsRequest(const ListSizeConstraintSetsRequest &other);
    ListSizeConstraintSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSizeConstraintSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
