// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTXSSMATCHSETSREQUEST_H
#define QTAWS_LISTXSSMATCHSETSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListXssMatchSetsRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListXssMatchSetsRequest : public WafRegionalRequest {

public:
    ListXssMatchSetsRequest(const ListXssMatchSetsRequest &other);
    ListXssMatchSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListXssMatchSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
