// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHUMANTASKUIREQUEST_H
#define QTAWS_CREATEHUMANTASKUIREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateHumanTaskUiRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateHumanTaskUiRequest : public SageMakerRequest {

public:
    CreateHumanTaskUiRequest(const CreateHumanTaskUiRequest &other);
    CreateHumanTaskUiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHumanTaskUiRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
