// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFARGATEPROFILERESPONSE_H
#define QTAWS_DELETEFARGATEPROFILERESPONSE_H

#include "eksresponse.h"
#include "deletefargateprofilerequest.h"

namespace QtAws {
namespace Eks {

class DeleteFargateProfileResponsePrivate;

class QTAWSEKS_EXPORT DeleteFargateProfileResponse : public EksResponse {
    Q_OBJECT

public:
    DeleteFargateProfileResponse(const DeleteFargateProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFargateProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFargateProfileResponse)
    Q_DISABLE_COPY(DeleteFargateProfileResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
