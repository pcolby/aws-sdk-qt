// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXPATTERNSETSRESPONSE_H
#define QTAWS_LISTREGEXPATTERNSETSRESPONSE_H

#include "wafresponse.h"
#include "listregexpatternsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListRegexPatternSetsResponsePrivate;

class QTAWSWAF_EXPORT ListRegexPatternSetsResponse : public WafResponse {
    Q_OBJECT

public:
    ListRegexPatternSetsResponse(const ListRegexPatternSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRegexPatternSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRegexPatternSetsResponse)
    Q_DISABLE_COPY(ListRegexPatternSetsResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
