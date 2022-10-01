// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEBUNDLESREQUEST_H
#define QTAWS_DESCRIBEWORKSPACEBUNDLESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceBundlesRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspaceBundlesRequest : public WorkSpacesRequest {

public:
    DescribeWorkspaceBundlesRequest(const DescribeWorkspaceBundlesRequest &other);
    DescribeWorkspaceBundlesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceBundlesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
