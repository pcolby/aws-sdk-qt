// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPROFILERESPONSE_H
#define QTAWS_UPDATEUSERPROFILERESPONSE_H

#include "sagemakerresponse.h"
#include "updateuserprofilerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateUserProfileResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateUserProfileResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateUserProfileResponse(const UpdateUserProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserProfileResponse)
    Q_DISABLE_COPY(UpdateUserProfileResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
