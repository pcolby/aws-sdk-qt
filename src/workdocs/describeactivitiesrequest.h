// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITIESREQUEST_H
#define QTAWS_DESCRIBEACTIVITIESREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeActivitiesRequestPrivate;

class QTAWSWORKDOCS_EXPORT DescribeActivitiesRequest : public WorkDocsRequest {

public:
    DescribeActivitiesRequest(const DescribeActivitiesRequest &other);
    DescribeActivitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActivitiesRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
