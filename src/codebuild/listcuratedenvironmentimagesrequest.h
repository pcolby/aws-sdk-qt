// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCURATEDENVIRONMENTIMAGESREQUEST_H
#define QTAWS_LISTCURATEDENVIRONMENTIMAGESREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListCuratedEnvironmentImagesRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListCuratedEnvironmentImagesRequest : public CodeBuildRequest {

public:
    ListCuratedEnvironmentImagesRequest(const ListCuratedEnvironmentImagesRequest &other);
    ListCuratedEnvironmentImagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCuratedEnvironmentImagesRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
