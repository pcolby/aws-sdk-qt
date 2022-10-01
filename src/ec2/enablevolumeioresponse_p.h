// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVOLUMEIORESPONSE_P_H
#define QTAWS_ENABLEVOLUMEIORESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableVolumeIOResponse;

class EnableVolumeIOResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableVolumeIOResponsePrivate(EnableVolumeIOResponse * const q);

    void parseEnableVolumeIOResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableVolumeIOResponse)
    Q_DISABLE_COPY(EnableVolumeIOResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
