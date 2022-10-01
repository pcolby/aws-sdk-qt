// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEVERSIONSREQUEST_H
#define QTAWS_LISTIMAGEVERSIONSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListImageVersionsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListImageVersionsRequest : public SageMakerRequest {

public:
    ListImageVersionsRequest(const ListImageVersionsRequest &other);
    ListImageVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImageVersionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
