// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROOTFOLDERSREQUEST_H
#define QTAWS_DESCRIBEROOTFOLDERSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeRootFoldersRequestPrivate;

class QTAWSWORKDOCS_EXPORT DescribeRootFoldersRequest : public WorkDocsRequest {

public:
    DescribeRootFoldersRequest(const DescribeRootFoldersRequest &other);
    DescribeRootFoldersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRootFoldersRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
