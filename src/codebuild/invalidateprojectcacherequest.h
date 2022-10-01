// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVALIDATEPROJECTCACHEREQUEST_H
#define QTAWS_INVALIDATEPROJECTCACHEREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class InvalidateProjectCacheRequestPrivate;

class QTAWSCODEBUILD_EXPORT InvalidateProjectCacheRequest : public CodeBuildRequest {

public:
    InvalidateProjectCacheRequest(const InvalidateProjectCacheRequest &other);
    InvalidateProjectCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvalidateProjectCacheRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
