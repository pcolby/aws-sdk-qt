// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIMARYEMAILADDRESSRESPONSE_P_H
#define QTAWS_UPDATEPRIMARYEMAILADDRESSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class UpdatePrimaryEmailAddressResponse;

class UpdatePrimaryEmailAddressResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit UpdatePrimaryEmailAddressResponsePrivate(UpdatePrimaryEmailAddressResponse * const q);

    void parseUpdatePrimaryEmailAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePrimaryEmailAddressResponse)
    Q_DISABLE_COPY(UpdatePrimaryEmailAddressResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
