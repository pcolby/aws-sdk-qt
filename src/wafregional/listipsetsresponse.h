// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPSETSRESPONSE_H
#define QTAWS_LISTIPSETSRESPONSE_H

#include "wafregionalresponse.h"
#include "listipsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListIPSetsResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT ListIPSetsResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    ListIPSetsResponse(const ListIPSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIPSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIPSetsResponse)
    Q_DISABLE_COPY(ListIPSetsResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
