// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELQUALITYJOBDEFINITIONSREQUEST_H
#define QTAWS_LISTMODELQUALITYJOBDEFINITIONSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelQualityJobDefinitionsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListModelQualityJobDefinitionsRequest : public SageMakerRequest {

public:
    ListModelQualityJobDefinitionsRequest(const ListModelQualityJobDefinitionsRequest &other);
    ListModelQualityJobDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelQualityJobDefinitionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
