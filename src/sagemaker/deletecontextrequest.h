// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTEXTREQUEST_H
#define QTAWS_DELETECONTEXTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteContextRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteContextRequest : public SageMakerRequest {

public:
    DeleteContextRequest(const DeleteContextRequest &other);
    DeleteContextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContextRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
