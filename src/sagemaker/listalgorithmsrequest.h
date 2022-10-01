// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALGORITHMSREQUEST_H
#define QTAWS_LISTALGORITHMSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAlgorithmsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListAlgorithmsRequest : public SageMakerRequest {

public:
    ListAlgorithmsRequest(const ListAlgorithmsRequest &other);
    ListAlgorithmsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlgorithmsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
