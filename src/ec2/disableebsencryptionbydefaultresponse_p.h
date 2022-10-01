// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEEBSENCRYPTIONBYDEFAULTRESPONSE_P_H
#define QTAWS_DISABLEEBSENCRYPTIONBYDEFAULTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisableEbsEncryptionByDefaultResponse;

class DisableEbsEncryptionByDefaultResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisableEbsEncryptionByDefaultResponsePrivate(DisableEbsEncryptionByDefaultResponse * const q);

    void parseDisableEbsEncryptionByDefaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableEbsEncryptionByDefaultResponse)
    Q_DISABLE_COPY(DisableEbsEncryptionByDefaultResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
