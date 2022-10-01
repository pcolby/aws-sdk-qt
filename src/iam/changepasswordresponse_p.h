// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEPASSWORDRESPONSE_P_H
#define QTAWS_CHANGEPASSWORDRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ChangePasswordResponse;

class ChangePasswordResponsePrivate : public IamResponsePrivate {

public:

    explicit ChangePasswordResponsePrivate(ChangePasswordResponse * const q);

    void parseChangePasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChangePasswordResponse)
    Q_DISABLE_COPY(ChangePasswordResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
