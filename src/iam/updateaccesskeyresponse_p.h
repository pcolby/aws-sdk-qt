// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSKEYRESPONSE_P_H
#define QTAWS_UPDATEACCESSKEYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateAccessKeyResponse;

class UpdateAccessKeyResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateAccessKeyResponsePrivate(UpdateAccessKeyResponse * const q);

    void parseUpdateAccessKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccessKeyResponse)
    Q_DISABLE_COPY(UpdateAccessKeyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
