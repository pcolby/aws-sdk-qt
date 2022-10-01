// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEIMAGESRESPONSE_H
#define QTAWS_DESCRIBEWORKSPACEIMAGESRESPONSE_H

#include "workspacesresponse.h"
#include "describeworkspaceimagesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceImagesResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspaceImagesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeWorkspaceImagesResponse(const DescribeWorkspaceImagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkspaceImagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceImagesResponse)
    Q_DISABLE_COPY(DescribeWorkspaceImagesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
