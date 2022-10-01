// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTPAGERESPONSE_P_H
#define QTAWS_ACCEPTPAGERESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class AcceptPageResponse;

class AcceptPageResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit AcceptPageResponsePrivate(AcceptPageResponse * const q);

    void parseAcceptPageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptPageResponse)
    Q_DISABLE_COPY(AcceptPageResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
