// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPIMAGECONFIGREQUEST_H
#define QTAWS_DELETEAPPIMAGECONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteAppImageConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteAppImageConfigRequest : public SageMakerRequest {

public:
    DeleteAppImageConfigRequest(const DeleteAppImageConfigRequest &other);
    DeleteAppImageConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppImageConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
