// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYLINEAGEREQUEST_H
#define QTAWS_QUERYLINEAGEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class QueryLineageRequestPrivate;

class QTAWSSAGEMAKER_EXPORT QueryLineageRequest : public SageMakerRequest {

public:
    QueryLineageRequest(const QueryLineageRequest &other);
    QueryLineageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryLineageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
