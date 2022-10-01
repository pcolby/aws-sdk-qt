// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTEBOOKINSTANCEREQUEST_H
#define QTAWS_UPDATENOTEBOOKINSTANCEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateNotebookInstanceRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateNotebookInstanceRequest : public SageMakerRequest {

public:
    UpdateNotebookInstanceRequest(const UpdateNotebookInstanceRequest &other);
    UpdateNotebookInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
