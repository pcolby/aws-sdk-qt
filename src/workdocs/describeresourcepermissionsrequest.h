// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBERESOURCEPERMISSIONSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeResourcePermissionsRequestPrivate;

class QTAWSWORKDOCS_EXPORT DescribeResourcePermissionsRequest : public WorkDocsRequest {

public:
    DescribeResourcePermissionsRequest(const DescribeResourcePermissionsRequest &other);
    DescribeResourcePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourcePermissionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
