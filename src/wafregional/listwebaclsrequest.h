// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBACLSREQUEST_H
#define QTAWS_LISTWEBACLSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListWebACLsRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListWebACLsRequest : public WafRegionalRequest {

public:
    ListWebACLsRequest(const ListWebACLsRequest &other);
    ListWebACLsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWebACLsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
