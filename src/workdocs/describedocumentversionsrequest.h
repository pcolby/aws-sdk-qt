// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTVERSIONSREQUEST_H
#define QTAWS_DESCRIBEDOCUMENTVERSIONSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeDocumentVersionsRequestPrivate;

class QTAWSWORKDOCS_EXPORT DescribeDocumentVersionsRequest : public WorkDocsRequest {

public:
    DescribeDocumentVersionsRequest(const DescribeDocumentVersionsRequest &other);
    DescribeDocumentVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDocumentVersionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
