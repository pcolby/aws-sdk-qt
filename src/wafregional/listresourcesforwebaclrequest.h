// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORWEBACLREQUEST_H
#define QTAWS_LISTRESOURCESFORWEBACLREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListResourcesForWebACLRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListResourcesForWebACLRequest : public WafRegionalRequest {

public:
    ListResourcesForWebACLRequest(const ListResourcesForWebACLRequest &other);
    ListResourcesForWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesForWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
