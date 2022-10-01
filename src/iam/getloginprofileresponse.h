// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGINPROFILERESPONSE_H
#define QTAWS_GETLOGINPROFILERESPONSE_H

#include "iamresponse.h"
#include "getloginprofilerequest.h"

namespace QtAws {
namespace Iam {

class GetLoginProfileResponsePrivate;

class QTAWSIAM_EXPORT GetLoginProfileResponse : public IamResponse {
    Q_OBJECT

public:
    GetLoginProfileResponse(const GetLoginProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoginProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoginProfileResponse)
    Q_DISABLE_COPY(GetLoginProfileResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
