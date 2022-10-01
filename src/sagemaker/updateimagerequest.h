// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEREQUEST_H
#define QTAWS_UPDATEIMAGEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateImageRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateImageRequest : public SageMakerRequest {

public:
    UpdateImageRequest(const UpdateImageRequest &other);
    UpdateImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateImageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
