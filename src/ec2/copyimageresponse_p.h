// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYIMAGERESPONSE_P_H
#define QTAWS_COPYIMAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CopyImageResponse;

class CopyImageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CopyImageResponsePrivate(CopyImageResponse * const q);

    void parseCopyImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyImageResponse)
    Q_DISABLE_COPY(CopyImageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
