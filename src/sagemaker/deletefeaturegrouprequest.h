// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFEATUREGROUPREQUEST_H
#define QTAWS_DELETEFEATUREGROUPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteFeatureGroupRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteFeatureGroupRequest : public SageMakerRequest {

public:
    DeleteFeatureGroupRequest(const DeleteFeatureGroupRequest &other);
    DeleteFeatureGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFeatureGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
