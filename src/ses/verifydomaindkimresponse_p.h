// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYDOMAINDKIMRESPONSE_P_H
#define QTAWS_VERIFYDOMAINDKIMRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class VerifyDomainDkimResponse;

class VerifyDomainDkimResponsePrivate : public SesResponsePrivate {

public:

    explicit VerifyDomainDkimResponsePrivate(VerifyDomainDkimResponse * const q);

    void parseVerifyDomainDkimResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyDomainDkimResponse)
    Q_DISABLE_COPY(VerifyDomainDkimResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
