// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOLIFECYCLECONFIGREQUEST_H
#define QTAWS_DELETESTUDIOLIFECYCLECONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteStudioLifecycleConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteStudioLifecycleConfigRequest : public SageMakerRequest {

public:
    DeleteStudioLifecycleConfigRequest(const DeleteStudioLifecycleConfigRequest &other);
    DeleteStudioLifecycleConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStudioLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
