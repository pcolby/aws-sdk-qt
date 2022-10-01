// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAQUALITYJOBDEFINITIONSREQUEST_H
#define QTAWS_LISTDATAQUALITYJOBDEFINITIONSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListDataQualityJobDefinitionsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListDataQualityJobDefinitionsRequest : public SageMakerRequest {

public:
    ListDataQualityJobDefinitionsRequest(const ListDataQualityJobDefinitionsRequest &other);
    ListDataQualityJobDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataQualityJobDefinitionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
