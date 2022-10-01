// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBEWORKSPACESNAPSHOTSREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceSnapshotsRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspaceSnapshotsRequest : public WorkSpacesRequest {

public:
    DescribeWorkspaceSnapshotsRequest(const DescribeWorkspaceSnapshotsRequest &other);
    DescribeWorkspaceSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceSnapshotsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
