// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFARGATEPROFILERESPONSE_H
#define QTAWS_CREATEFARGATEPROFILERESPONSE_H

#include "eksresponse.h"
#include "createfargateprofilerequest.h"

namespace QtAws {
namespace Eks {

class CreateFargateProfileResponsePrivate;

class QTAWSEKS_EXPORT CreateFargateProfileResponse : public EksResponse {
    Q_OBJECT

public:
    CreateFargateProfileResponse(const CreateFargateProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFargateProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFargateProfileResponse)
    Q_DISABLE_COPY(CreateFargateProfileResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
