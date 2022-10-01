// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPROFILERESPONSE_H
#define QTAWS_CREATEUSERPROFILERESPONSE_H

#include "sagemakerresponse.h"
#include "createuserprofilerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateUserProfileResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateUserProfileResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateUserProfileResponse(const CreateUserProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUserProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserProfileResponse)
    Q_DISABLE_COPY(CreateUserProfileResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
