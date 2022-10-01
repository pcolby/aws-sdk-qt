// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEIMAGEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEWORKSPACEIMAGEPERMISSIONSRESPONSE_H

#include "workspacesresponse.h"
#include "describeworkspaceimagepermissionsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceImagePermissionsResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspaceImagePermissionsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeWorkspaceImagePermissionsResponse(const DescribeWorkspaceImagePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkspaceImagePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceImagePermissionsResponse)
    Q_DISABLE_COPY(DescribeWorkspaceImagePermissionsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
