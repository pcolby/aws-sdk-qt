// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLREQUEST_P_H
#define QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createpresignednotebookinstanceurlrequest.h"

namespace QtAws {
namespace SageMaker {

class CreatePresignedNotebookInstanceUrlRequest;

class CreatePresignedNotebookInstanceUrlRequestPrivate : public SageMakerRequestPrivate {

public:
    CreatePresignedNotebookInstanceUrlRequestPrivate(const SageMakerRequest::Action action,
                                   CreatePresignedNotebookInstanceUrlRequest * const q);
    CreatePresignedNotebookInstanceUrlRequestPrivate(const CreatePresignedNotebookInstanceUrlRequestPrivate &other,
                                   CreatePresignedNotebookInstanceUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePresignedNotebookInstanceUrlRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
