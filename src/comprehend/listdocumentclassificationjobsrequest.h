// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFICATIONJOBSREQUEST_H
#define QTAWS_LISTDOCUMENTCLASSIFICATIONJOBSREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassificationJobsRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ListDocumentClassificationJobsRequest : public ComprehendRequest {

public:
    ListDocumentClassificationJobsRequest(const ListDocumentClassificationJobsRequest &other);
    ListDocumentClassificationJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentClassificationJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
