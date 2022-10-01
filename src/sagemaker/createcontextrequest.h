// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTEXTREQUEST_H
#define QTAWS_CREATECONTEXTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateContextRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateContextRequest : public SageMakerRequest {

public:
    CreateContextRequest(const CreateContextRequest &other);
    CreateContextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContextRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
