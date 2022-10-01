// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSQLINJECTIONMATCHSETSRESPONSE_H
#define QTAWS_LISTSQLINJECTIONMATCHSETSRESPONSE_H

#include "wafresponse.h"
#include "listsqlinjectionmatchsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListSqlInjectionMatchSetsResponsePrivate;

class QTAWSWAF_EXPORT ListSqlInjectionMatchSetsResponse : public WafResponse {
    Q_OBJECT

public:
    ListSqlInjectionMatchSetsResponse(const ListSqlInjectionMatchSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSqlInjectionMatchSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSqlInjectionMatchSetsResponse)
    Q_DISABLE_COPY(ListSqlInjectionMatchSetsResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
