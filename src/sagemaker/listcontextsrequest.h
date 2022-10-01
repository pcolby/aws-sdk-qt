// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTEXTSREQUEST_H
#define QTAWS_LISTCONTEXTSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListContextsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListContextsRequest : public SageMakerRequest {

public:
    ListContextsRequest(const ListContextsRequest &other);
    ListContextsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContextsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
