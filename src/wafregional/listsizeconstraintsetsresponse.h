// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIZECONSTRAINTSETSRESPONSE_H
#define QTAWS_LISTSIZECONSTRAINTSETSRESPONSE_H

#include "wafregionalresponse.h"
#include "listsizeconstraintsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListSizeConstraintSetsResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT ListSizeConstraintSetsResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    ListSizeConstraintSetsResponse(const ListSizeConstraintSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSizeConstraintSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSizeConstraintSetsResponse)
    Q_DISABLE_COPY(ListSizeConstraintSetsResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
