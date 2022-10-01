// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSREQUEST_H
#define QTAWS_DESCRIBEUSERSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeUsersRequestPrivate;

class QTAWSWORKDOCS_EXPORT DescribeUsersRequest : public WorkDocsRequest {

public:
    DescribeUsersRequest(const DescribeUsersRequest &other);
    DescribeUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUsersRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
