// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERRESPONSE_H
#define QTAWS_GETUSERRESPONSE_H

#include "iamresponse.h"
#include "getuserrequest.h"

namespace QtAws {
namespace Iam {

class GetUserResponsePrivate;

class QTAWSIAM_EXPORT GetUserResponse : public IamResponse {
    Q_OBJECT

public:
    GetUserResponse(const GetUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserResponse)
    Q_DISABLE_COPY(GetUserResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
