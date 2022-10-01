// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERUSERRESPONSE_H
#define QTAWS_REGISTERUSERRESPONSE_H

#include "quicksightresponse.h"
#include "registeruserrequest.h"

namespace QtAws {
namespace QuickSight {

class RegisterUserResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT RegisterUserResponse : public QuickSightResponse {
    Q_OBJECT

public:
    RegisterUserResponse(const RegisterUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterUserResponse)
    Q_DISABLE_COPY(RegisterUserResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
