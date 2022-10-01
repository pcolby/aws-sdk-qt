// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCESRESPONSE_H
#define QTAWS_UNTAGRESOURCESRESPONSE_H

#include "resourcegroupstaggingresponse.h"
#include "untagresourcesrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class UntagResourcesResponsePrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT UntagResourcesResponse : public ResourceGroupsTaggingResponse {
    Q_OBJECT

public:
    UntagResourcesResponse(const UntagResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagResourcesResponse)
    Q_DISABLE_COPY(UntagResourcesResponse)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
