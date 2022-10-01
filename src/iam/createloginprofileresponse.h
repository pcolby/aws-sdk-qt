// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGINPROFILERESPONSE_H
#define QTAWS_CREATELOGINPROFILERESPONSE_H

#include "iamresponse.h"
#include "createloginprofilerequest.h"

namespace QtAws {
namespace Iam {

class CreateLoginProfileResponsePrivate;

class QTAWSIAM_EXPORT CreateLoginProfileResponse : public IamResponse {
    Q_OBJECT

public:
    CreateLoginProfileResponse(const CreateLoginProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoginProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoginProfileResponse)
    Q_DISABLE_COPY(CreateLoginProfileResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
