// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCESRESPONSE_H
#define QTAWS_TAGRESOURCESRESPONSE_H

#include "resourcegroupstaggingresponse.h"
#include "tagresourcesrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class TagResourcesResponsePrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT TagResourcesResponse : public ResourceGroupsTaggingResponse {
    Q_OBJECT

public:
    TagResourcesResponse(const TagResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagResourcesResponse)
    Q_DISABLE_COPY(TagResourcesResponse)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
