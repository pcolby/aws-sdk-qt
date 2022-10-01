// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFIERSUMMARIESREQUEST_H
#define QTAWS_LISTDOCUMENTCLASSIFIERSUMMARIESREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassifierSummariesRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ListDocumentClassifierSummariesRequest : public ComprehendRequest {

public:
    ListDocumentClassifierSummariesRequest(const ListDocumentClassifierSummariesRequest &other);
    ListDocumentClassifierSummariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentClassifierSummariesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
