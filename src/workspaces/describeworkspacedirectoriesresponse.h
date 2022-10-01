// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEDIRECTORIESRESPONSE_H
#define QTAWS_DESCRIBEWORKSPACEDIRECTORIESRESPONSE_H

#include "workspacesresponse.h"
#include "describeworkspacedirectoriesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceDirectoriesResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspaceDirectoriesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeWorkspaceDirectoriesResponse(const DescribeWorkspaceDirectoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkspaceDirectoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceDirectoriesResponse)
    Q_DISABLE_COPY(DescribeWorkspaceDirectoriesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
