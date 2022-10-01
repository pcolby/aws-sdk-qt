// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNOUTUSERRESPONSE_H
#define QTAWS_SIGNOUTUSERRESPONSE_H

#include "worklinkresponse.h"
#include "signoutuserrequest.h"

namespace QtAws {
namespace WorkLink {

class SignOutUserResponsePrivate;

class QTAWSWORKLINK_EXPORT SignOutUserResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    SignOutUserResponse(const SignOutUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SignOutUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignOutUserResponse)
    Q_DISABLE_COPY(SignOutUserResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
