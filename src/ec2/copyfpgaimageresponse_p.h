// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYFPGAIMAGERESPONSE_P_H
#define QTAWS_COPYFPGAIMAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CopyFpgaImageResponse;

class CopyFpgaImageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CopyFpgaImageResponsePrivate(CopyFpgaImageResponse * const q);

    void parseCopyFpgaImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyFpgaImageResponse)
    Q_DISABLE_COPY(CopyFpgaImageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
