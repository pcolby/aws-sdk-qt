// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGESREQUEST_H
#define QTAWS_LISTMODELPACKAGESREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelPackagesRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListModelPackagesRequest : public SageMakerRequest {

public:
    ListModelPackagesRequest(const ListModelPackagesRequest &other);
    ListModelPackagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelPackagesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
