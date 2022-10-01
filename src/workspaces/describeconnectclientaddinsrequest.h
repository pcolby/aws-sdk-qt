// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTCLIENTADDINSREQUEST_H
#define QTAWS_DESCRIBECONNECTCLIENTADDINSREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectClientAddInsRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeConnectClientAddInsRequest : public WorkSpacesRequest {

public:
    DescribeConnectClientAddInsRequest(const DescribeConnectClientAddInsRequest &other);
    DescribeConnectClientAddInsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectClientAddInsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
