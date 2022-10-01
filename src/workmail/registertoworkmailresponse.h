// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTOWORKMAILRESPONSE_H
#define QTAWS_REGISTERTOWORKMAILRESPONSE_H

#include "workmailresponse.h"
#include "registertoworkmailrequest.h"

namespace QtAws {
namespace WorkMail {

class RegisterToWorkMailResponsePrivate;

class QTAWSWORKMAIL_EXPORT RegisterToWorkMailResponse : public WorkMailResponse {
    Q_OBJECT

public:
    RegisterToWorkMailResponse(const RegisterToWorkMailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterToWorkMailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterToWorkMailResponse)
    Q_DISABLE_COPY(RegisterToWorkMailResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
