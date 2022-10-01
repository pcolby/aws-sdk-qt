// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBACLSRESPONSE_H
#define QTAWS_LISTWEBACLSRESPONSE_H

#include "wafv2response.h"
#include "listwebaclsrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListWebACLsResponsePrivate;

class QTAWSWAFV2_EXPORT ListWebACLsResponse : public Wafv2Response {
    Q_OBJECT

public:
    ListWebACLsResponse(const ListWebACLsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWebACLsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWebACLsResponse)
    Q_DISABLE_COPY(ListWebACLsResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
