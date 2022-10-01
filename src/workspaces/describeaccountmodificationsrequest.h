// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTMODIFICATIONSREQUEST_H
#define QTAWS_DESCRIBEACCOUNTMODIFICATIONSREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeAccountModificationsRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeAccountModificationsRequest : public WorkSpacesRequest {

public:
    DescribeAccountModificationsRequest(const DescribeAccountModificationsRequest &other);
    DescribeAccountModificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountModificationsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
