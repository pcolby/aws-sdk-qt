// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORWEBACLRESPONSE_H
#define QTAWS_LISTRESOURCESFORWEBACLRESPONSE_H

#include "wafv2response.h"
#include "listresourcesforwebaclrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListResourcesForWebACLResponsePrivate;

class QTAWSWAFV2_EXPORT ListResourcesForWebACLResponse : public Wafv2Response {
    Q_OBJECT

public:
    ListResourcesForWebACLResponse(const ListResourcesForWebACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourcesForWebACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesForWebACLResponse)
    Q_DISABLE_COPY(ListResourcesForWebACLResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
