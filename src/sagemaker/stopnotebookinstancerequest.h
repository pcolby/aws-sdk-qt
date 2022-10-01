// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPNOTEBOOKINSTANCEREQUEST_H
#define QTAWS_STOPNOTEBOOKINSTANCEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopNotebookInstanceRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopNotebookInstanceRequest : public SageMakerRequest {

public:
    StopNotebookInstanceRequest(const StopNotebookInstanceRequest &other);
    StopNotebookInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
