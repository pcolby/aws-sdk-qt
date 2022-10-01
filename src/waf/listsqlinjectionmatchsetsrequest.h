// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSQLINJECTIONMATCHSETSREQUEST_H
#define QTAWS_LISTSQLINJECTIONMATCHSETSREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class ListSqlInjectionMatchSetsRequestPrivate;

class QTAWSWAF_EXPORT ListSqlInjectionMatchSetsRequest : public WafRequest {

public:
    ListSqlInjectionMatchSetsRequest(const ListSqlInjectionMatchSetsRequest &other);
    ListSqlInjectionMatchSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSqlInjectionMatchSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
