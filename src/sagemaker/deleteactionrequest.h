// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIONREQUEST_H
#define QTAWS_DELETEACTIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteActionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteActionRequest : public SageMakerRequest {

public:
    DeleteActionRequest(const DeleteActionRequest &other);
    DeleteActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteActionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
