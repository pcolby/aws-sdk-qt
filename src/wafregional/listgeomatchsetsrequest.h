// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOMATCHSETSREQUEST_H
#define QTAWS_LISTGEOMATCHSETSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListGeoMatchSetsRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListGeoMatchSetsRequest : public WafRegionalRequest {

public:
    ListGeoMatchSetsRequest(const ListGeoMatchSetsRequest &other);
    ListGeoMatchSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeoMatchSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
