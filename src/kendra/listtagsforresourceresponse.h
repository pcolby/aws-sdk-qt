// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCERESPONSE_H
#define QTAWS_LISTTAGSFORRESOURCERESPONSE_H

#include "kendraresponse.h"
#include "listtagsforresourcerequest.h"

namespace QtAws {
namespace Kendra {

class ListTagsForResourceResponsePrivate;

class QTAWSKENDRA_EXPORT ListTagsForResourceResponse : public KendraResponse {
    Q_OBJECT

public:
    ListTagsForResourceResponse(const ListTagsForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForResourceResponse)
    Q_DISABLE_COPY(ListTagsForResourceResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
