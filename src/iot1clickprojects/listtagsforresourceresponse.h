// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCERESPONSE_H
#define QTAWS_LISTTAGSFORRESOURCERESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "listtagsforresourcerequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class ListTagsForResourceResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT ListTagsForResourceResponse : public IoT1ClickProjectsResponse {
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

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
