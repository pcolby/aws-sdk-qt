// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPASSWORDRESPONSE_H
#define QTAWS_RESETPASSWORDRESPONSE_H

#include "workmailresponse.h"
#include "resetpasswordrequest.h"

namespace QtAws {
namespace WorkMail {

class ResetPasswordResponsePrivate;

class QTAWSWORKMAIL_EXPORT ResetPasswordResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ResetPasswordResponse(const ResetPasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetPasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetPasswordResponse)
    Q_DISABLE_COPY(ResetPasswordResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
