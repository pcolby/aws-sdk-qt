// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTCLASSIFIERREQUEST_P_H
#define QTAWS_DELETEDOCUMENTCLASSIFIERREQUEST_P_H

#include "comprehendrequest_p.h"
#include "deletedocumentclassifierrequest.h"

namespace QtAws {
namespace Comprehend {

class DeleteDocumentClassifierRequest;

class DeleteDocumentClassifierRequestPrivate : public ComprehendRequestPrivate {

public:
    DeleteDocumentClassifierRequestPrivate(const ComprehendRequest::Action action,
                                   DeleteDocumentClassifierRequest * const q);
    DeleteDocumentClassifierRequestPrivate(const DeleteDocumentClassifierRequestPrivate &other,
                                   DeleteDocumentClassifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDocumentClassifierRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
