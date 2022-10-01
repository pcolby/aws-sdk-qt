// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEDIRECTORIESREQUEST_H
#define QTAWS_DESCRIBEWORKSPACEDIRECTORIESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceDirectoriesRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspaceDirectoriesRequest : public WorkSpacesRequest {

public:
    DescribeWorkspaceDirectoriesRequest(const DescribeWorkspaceDirectoriesRequest &other);
    DescribeWorkspaceDirectoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceDirectoriesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
