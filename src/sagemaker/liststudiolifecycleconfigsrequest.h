// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOLIFECYCLECONFIGSREQUEST_H
#define QTAWS_LISTSTUDIOLIFECYCLECONFIGSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListStudioLifecycleConfigsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListStudioLifecycleConfigsRequest : public SageMakerRequest {

public:
    ListStudioLifecycleConfigsRequest(const ListStudioLifecycleConfigsRequest &other);
    ListStudioLifecycleConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudioLifecycleConfigsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
