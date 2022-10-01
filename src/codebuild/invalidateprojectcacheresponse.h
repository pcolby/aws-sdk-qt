// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVALIDATEPROJECTCACHERESPONSE_H
#define QTAWS_INVALIDATEPROJECTCACHERESPONSE_H

#include "codebuildresponse.h"
#include "invalidateprojectcacherequest.h"

namespace QtAws {
namespace CodeBuild {

class InvalidateProjectCacheResponsePrivate;

class QTAWSCODEBUILD_EXPORT InvalidateProjectCacheResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    InvalidateProjectCacheResponse(const InvalidateProjectCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InvalidateProjectCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvalidateProjectCacheResponse)
    Q_DISABLE_COPY(InvalidateProjectCacheResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
