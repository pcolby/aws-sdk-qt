// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPIMAGECONFIGSREQUEST_H
#define QTAWS_LISTAPPIMAGECONFIGSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAppImageConfigsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListAppImageConfigsRequest : public SageMakerRequest {

public:
    ListAppImageConfigsRequest(const ListAppImageConfigsRequest &other);
    ListAppImageConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppImageConfigsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
