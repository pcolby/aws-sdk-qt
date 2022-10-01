// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTREQUEST_H
#define QTAWS_DESCRIBEACCOUNTREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeAccountRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeAccountRequest : public WorkSpacesRequest {

public:
    DescribeAccountRequest(const DescribeAccountRequest &other);
    DescribeAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
