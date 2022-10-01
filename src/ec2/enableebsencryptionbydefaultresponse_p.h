// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEEBSENCRYPTIONBYDEFAULTRESPONSE_P_H
#define QTAWS_ENABLEEBSENCRYPTIONBYDEFAULTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableEbsEncryptionByDefaultResponse;

class EnableEbsEncryptionByDefaultResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableEbsEncryptionByDefaultResponsePrivate(EnableEbsEncryptionByDefaultResponse * const q);

    void parseEnableEbsEncryptionByDefaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableEbsEncryptionByDefaultResponse)
    Q_DISABLE_COPY(EnableEbsEncryptionByDefaultResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
