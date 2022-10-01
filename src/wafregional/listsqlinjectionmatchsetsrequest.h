// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSQLINJECTIONMATCHSETSREQUEST_H
#define QTAWS_LISTSQLINJECTIONMATCHSETSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListSqlInjectionMatchSetsRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListSqlInjectionMatchSetsRequest : public WafRegionalRequest {

public:
    ListSqlInjectionMatchSetsRequest(const ListSqlInjectionMatchSetsRequest &other);
    ListSqlInjectionMatchSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSqlInjectionMatchSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
