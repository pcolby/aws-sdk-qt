// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGUSERRESPONSE_P_H
#define QTAWS_UNTAGUSERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UntagUserResponse;

class UntagUserResponsePrivate : public IamResponsePrivate {

public:

    explicit UntagUserResponsePrivate(UntagUserResponse * const q);

    void parseUntagUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagUserResponse)
    Q_DISABLE_COPY(UntagUserResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
