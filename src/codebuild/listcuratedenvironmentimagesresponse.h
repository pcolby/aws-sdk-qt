// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCURATEDENVIRONMENTIMAGESRESPONSE_H
#define QTAWS_LISTCURATEDENVIRONMENTIMAGESRESPONSE_H

#include "codebuildresponse.h"
#include "listcuratedenvironmentimagesrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListCuratedEnvironmentImagesResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListCuratedEnvironmentImagesResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListCuratedEnvironmentImagesResponse(const ListCuratedEnvironmentImagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCuratedEnvironmentImagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCuratedEnvironmentImagesResponse)
    Q_DISABLE_COPY(ListCuratedEnvironmentImagesResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
