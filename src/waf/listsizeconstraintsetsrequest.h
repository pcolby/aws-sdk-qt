// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIZECONSTRAINTSETSREQUEST_H
#define QTAWS_LISTSIZECONSTRAINTSETSREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class ListSizeConstraintSetsRequestPrivate;

class QTAWSWAF_EXPORT ListSizeConstraintSetsRequest : public WafRequest {

public:
    ListSizeConstraintSetsRequest(const ListSizeConstraintSetsRequest &other);
    ListSizeConstraintSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSizeConstraintSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
