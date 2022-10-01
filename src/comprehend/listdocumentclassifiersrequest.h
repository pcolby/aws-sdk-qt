// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFIERSREQUEST_H
#define QTAWS_LISTDOCUMENTCLASSIFIERSREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassifiersRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ListDocumentClassifiersRequest : public ComprehendRequest {

public:
    ListDocumentClassifiersRequest(const ListDocumentClassifiersRequest &other);
    ListDocumentClassifiersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentClassifiersRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
