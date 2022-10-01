// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONSREQUEST_H
#define QTAWS_LISTACTIONSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListActionsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListActionsRequest : public SageMakerRequest {

public:
    ListActionsRequest(const ListActionsRequest &other);
    ListActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
