// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPIMAGECONFIGREQUEST_H
#define QTAWS_UPDATEAPPIMAGECONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateAppImageConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateAppImageConfigRequest : public SageMakerRequest {

public:
    UpdateAppImageConfigRequest(const UpdateAppImageConfigRequest &other);
    UpdateAppImageConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppImageConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
