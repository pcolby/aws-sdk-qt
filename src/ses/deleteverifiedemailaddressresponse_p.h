// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVERIFIEDEMAILADDRESSRESPONSE_P_H
#define QTAWS_DELETEVERIFIEDEMAILADDRESSRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteVerifiedEmailAddressResponse;

class DeleteVerifiedEmailAddressResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteVerifiedEmailAddressResponsePrivate(DeleteVerifiedEmailAddressResponse * const q);

    void parseDeleteVerifiedEmailAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVerifiedEmailAddressResponse)
    Q_DISABLE_COPY(DeleteVerifiedEmailAddressResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
