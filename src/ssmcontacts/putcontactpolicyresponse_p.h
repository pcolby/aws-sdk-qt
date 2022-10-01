// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTACTPOLICYRESPONSE_P_H
#define QTAWS_PUTCONTACTPOLICYRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class PutContactPolicyResponse;

class PutContactPolicyResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit PutContactPolicyResponsePrivate(PutContactPolicyResponse * const q);

    void parsePutContactPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutContactPolicyResponse)
    Q_DISABLE_COPY(PutContactPolicyResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
