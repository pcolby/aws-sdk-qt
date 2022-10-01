// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNOUTUSERRESPONSE_P_H
#define QTAWS_SIGNOUTUSERRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class SignOutUserResponse;

class SignOutUserResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit SignOutUserResponsePrivate(SignOutUserResponse * const q);

    void parseSignOutUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SignOutUserResponse)
    Q_DISABLE_COPY(SignOutUserResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
