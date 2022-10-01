// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTXSSMATCHSETSRESPONSE_H
#define QTAWS_LISTXSSMATCHSETSRESPONSE_H

#include "wafregionalresponse.h"
#include "listxssmatchsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListXssMatchSetsResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT ListXssMatchSetsResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    ListXssMatchSetsResponse(const ListXssMatchSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListXssMatchSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListXssMatchSetsResponse)
    Q_DISABLE_COPY(ListXssMatchSetsResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
