// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSKEYRESPONSE_P_H
#define QTAWS_CREATEACCESSKEYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreateAccessKeyResponse;

class CreateAccessKeyResponsePrivate : public IamResponsePrivate {

public:

    explicit CreateAccessKeyResponsePrivate(CreateAccessKeyResponse * const q);

    void parseCreateAccessKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccessKeyResponse)
    Q_DISABLE_COPY(CreateAccessKeyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
