// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTCLASSIFIERREQUEST_H
#define QTAWS_DELETEDOCUMENTCLASSIFIERREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DeleteDocumentClassifierRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DeleteDocumentClassifierRequest : public ComprehendRequest {

public:
    DeleteDocumentClassifierRequest(const DeleteDocumentClassifierRequest &other);
    DeleteDocumentClassifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDocumentClassifierRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
