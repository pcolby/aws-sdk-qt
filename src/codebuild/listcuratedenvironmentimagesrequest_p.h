// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCURATEDENVIRONMENTIMAGESREQUEST_P_H
#define QTAWS_LISTCURATEDENVIRONMENTIMAGESREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listcuratedenvironmentimagesrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListCuratedEnvironmentImagesRequest;

class ListCuratedEnvironmentImagesRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListCuratedEnvironmentImagesRequestPrivate(const CodeBuildRequest::Action action,
                                   ListCuratedEnvironmentImagesRequest * const q);
    ListCuratedEnvironmentImagesRequestPrivate(const ListCuratedEnvironmentImagesRequestPrivate &other,
                                   ListCuratedEnvironmentImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCuratedEnvironmentImagesRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
