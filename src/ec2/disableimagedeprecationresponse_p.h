// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIMAGEDEPRECATIONRESPONSE_P_H
#define QTAWS_DISABLEIMAGEDEPRECATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisableImageDeprecationResponse;

class DisableImageDeprecationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisableImageDeprecationResponsePrivate(DisableImageDeprecationResponse * const q);

    void parseDisableImageDeprecationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableImageDeprecationResponse)
    Q_DISABLE_COPY(DisableImageDeprecationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
