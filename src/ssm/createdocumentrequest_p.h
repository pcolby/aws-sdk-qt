// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTREQUEST_P_H
#define QTAWS_CREATEDOCUMENTREQUEST_P_H

#include "ssmrequest_p.h"
#include "createdocumentrequest.h"

namespace QtAws {
namespace Ssm {

class CreateDocumentRequest;

class CreateDocumentRequestPrivate : public SsmRequestPrivate {

public:
    CreateDocumentRequestPrivate(const SsmRequest::Action action,
                                   CreateDocumentRequest * const q);
    CreateDocumentRequestPrivate(const CreateDocumentRequestPrivate &other,
                                   CreateDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDocumentRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
