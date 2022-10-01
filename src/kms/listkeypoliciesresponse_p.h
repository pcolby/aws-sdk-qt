// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYPOLICIESRESPONSE_P_H
#define QTAWS_LISTKEYPOLICIESRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ListKeyPoliciesResponse;

class ListKeyPoliciesResponsePrivate : public KmsResponsePrivate {

public:

    explicit ListKeyPoliciesResponsePrivate(ListKeyPoliciesResponse * const q);

    void parseListKeyPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListKeyPoliciesResponse)
    Q_DISABLE_COPY(ListKeyPoliciesResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
