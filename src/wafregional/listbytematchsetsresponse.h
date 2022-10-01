// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBYTEMATCHSETSRESPONSE_H
#define QTAWS_LISTBYTEMATCHSETSRESPONSE_H

#include "wafregionalresponse.h"
#include "listbytematchsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListByteMatchSetsResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT ListByteMatchSetsResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    ListByteMatchSetsResponse(const ListByteMatchSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListByteMatchSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListByteMatchSetsResponse)
    Q_DISABLE_COPY(ListByteMatchSetsResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
