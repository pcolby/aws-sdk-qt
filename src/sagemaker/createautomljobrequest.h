// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOMLJOBREQUEST_H
#define QTAWS_CREATEAUTOMLJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateAutoMLJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateAutoMLJobRequest : public SageMakerRequest {

public:
    CreateAutoMLJobRequest(const CreateAutoMLJobRequest &other);
    CreateAutoMLJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAutoMLJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
