// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXMATCHSETSRESPONSE_H
#define QTAWS_LISTREGEXMATCHSETSRESPONSE_H

#include "wafresponse.h"
#include "listregexmatchsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListRegexMatchSetsResponsePrivate;

class QTAWSWAF_EXPORT ListRegexMatchSetsResponse : public WafResponse {
    Q_OBJECT

public:
    ListRegexMatchSetsResponse(const ListRegexMatchSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRegexMatchSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRegexMatchSetsResponse)
    Q_DISABLE_COPY(ListRegexMatchSetsResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
