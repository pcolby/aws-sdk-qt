// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOMATCHSETSRESPONSE_H
#define QTAWS_LISTGEOMATCHSETSRESPONSE_H

#include "wafresponse.h"
#include "listgeomatchsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListGeoMatchSetsResponsePrivate;

class QTAWSWAF_EXPORT ListGeoMatchSetsResponse : public WafResponse {
    Q_OBJECT

public:
    ListGeoMatchSetsResponse(const ListGeoMatchSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGeoMatchSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeoMatchSetsResponse)
    Q_DISABLE_COPY(ListGeoMatchSetsResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
