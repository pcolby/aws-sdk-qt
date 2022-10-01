// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELMETADATAREQUEST_H
#define QTAWS_LISTMODELMETADATAREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelMetadataRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListModelMetadataRequest : public SageMakerRequest {

public:
    ListModelMetadataRequest(const ListModelMetadataRequest &other);
    ListModelMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelMetadataRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
