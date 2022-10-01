// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSKEYRESPONSE_P_H
#define QTAWS_DELETEACCESSKEYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteAccessKeyResponse;

class DeleteAccessKeyResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteAccessKeyResponsePrivate(DeleteAccessKeyResponse * const q);

    void parseDeleteAccessKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessKeyResponse)
    Q_DISABLE_COPY(DeleteAccessKeyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
