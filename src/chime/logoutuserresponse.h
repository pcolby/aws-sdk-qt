// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOGOUTUSERRESPONSE_H
#define QTAWS_LOGOUTUSERRESPONSE_H

#include "chimeresponse.h"
#include "logoutuserrequest.h"

namespace QtAws {
namespace Chime {

class LogoutUserResponsePrivate;

class QTAWSCHIME_EXPORT LogoutUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    LogoutUserResponse(const LogoutUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LogoutUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LogoutUserResponse)
    Q_DISABLE_COPY(LogoutUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
