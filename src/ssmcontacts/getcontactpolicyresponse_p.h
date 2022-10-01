// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTPOLICYRESPONSE_P_H
#define QTAWS_GETCONTACTPOLICYRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class GetContactPolicyResponse;

class GetContactPolicyResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit GetContactPolicyResponsePrivate(GetContactPolicyResponse * const q);

    void parseGetContactPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContactPolicyResponse)
    Q_DISABLE_COPY(GetContactPolicyResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
