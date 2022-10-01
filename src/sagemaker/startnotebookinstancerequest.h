// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNOTEBOOKINSTANCEREQUEST_H
#define QTAWS_STARTNOTEBOOKINSTANCEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StartNotebookInstanceRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StartNotebookInstanceRequest : public SageMakerRequest {

public:
    StartNotebookInstanceRequest(const StartNotebookInstanceRequest &other);
    StartNotebookInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
