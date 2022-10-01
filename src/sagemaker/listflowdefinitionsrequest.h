// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWDEFINITIONSREQUEST_H
#define QTAWS_LISTFLOWDEFINITIONSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListFlowDefinitionsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListFlowDefinitionsRequest : public SageMakerRequest {

public:
    ListFlowDefinitionsRequest(const ListFlowDefinitionsRequest &other);
    ListFlowDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFlowDefinitionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
