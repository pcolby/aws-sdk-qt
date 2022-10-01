// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESCONNECTIONSTATUSREQUEST_H
#define QTAWS_DESCRIBEWORKSPACESCONNECTIONSTATUSREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspacesConnectionStatusRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspacesConnectionStatusRequest : public WorkSpacesRequest {

public:
    DescribeWorkspacesConnectionStatusRequest(const DescribeWorkspacesConnectionStatusRequest &other);
    DescribeWorkspacesConnectionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspacesConnectionStatusRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
