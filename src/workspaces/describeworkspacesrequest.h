// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESREQUEST_H
#define QTAWS_DESCRIBEWORKSPACESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspacesRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspacesRequest : public WorkSpacesRequest {

public:
    DescribeWorkspacesRequest(const DescribeWorkspacesRequest &other);
    DescribeWorkspacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
