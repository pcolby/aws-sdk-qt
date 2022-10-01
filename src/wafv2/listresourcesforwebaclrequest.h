// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORWEBACLREQUEST_H
#define QTAWS_LISTRESOURCESFORWEBACLREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class ListResourcesForWebACLRequestPrivate;

class QTAWSWAFV2_EXPORT ListResourcesForWebACLRequest : public Wafv2Request {

public:
    ListResourcesForWebACLRequest(const ListResourcesForWebACLRequest &other);
    ListResourcesForWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesForWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
