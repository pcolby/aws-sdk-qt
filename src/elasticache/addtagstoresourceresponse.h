// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTORESOURCERESPONSE_H
#define QTAWS_ADDTAGSTORESOURCERESPONSE_H

#include "elasticacheresponse.h"
#include "addtagstoresourcerequest.h"

namespace QtAws {
namespace ElastiCache {

class AddTagsToResourceResponsePrivate;

class QTAWSELASTICACHE_EXPORT AddTagsToResourceResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    AddTagsToResourceResponse(const AddTagsToResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddTagsToResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToResourceResponse)
    Q_DISABLE_COPY(AddTagsToResourceResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
