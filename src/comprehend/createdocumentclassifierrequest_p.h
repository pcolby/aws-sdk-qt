// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTCLASSIFIERREQUEST_P_H
#define QTAWS_CREATEDOCUMENTCLASSIFIERREQUEST_P_H

#include "comprehendrequest_p.h"
#include "createdocumentclassifierrequest.h"

namespace QtAws {
namespace Comprehend {

class CreateDocumentClassifierRequest;

class CreateDocumentClassifierRequestPrivate : public ComprehendRequestPrivate {

public:
    CreateDocumentClassifierRequestPrivate(const ComprehendRequest::Action action,
                                   CreateDocumentClassifierRequest * const q);
    CreateDocumentClassifierRequestPrivate(const CreateDocumentClassifierRequestPrivate &other,
                                   CreateDocumentClassifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDocumentClassifierRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
