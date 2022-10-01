// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOINTRESPONSE_P_H
#define QTAWS_CREATEACCESSPOINTRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class CreateAccessPointResponse;

class CreateAccessPointResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit CreateAccessPointResponsePrivate(CreateAccessPointResponse * const q);

    void parseCreateAccessPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccessPointResponse)
    Q_DISABLE_COPY(CreateAccessPointResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
