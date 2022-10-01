// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTCLASSIFIERREQUEST_H
#define QTAWS_CREATEDOCUMENTCLASSIFIERREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class CreateDocumentClassifierRequestPrivate;

class QTAWSCOMPREHEND_EXPORT CreateDocumentClassifierRequest : public ComprehendRequest {

public:
    CreateDocumentClassifierRequest(const CreateDocumentClassifierRequest &other);
    CreateDocumentClassifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDocumentClassifierRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
