// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTRESPONSE_P_H
#define QTAWS_GETACCESSPOINTRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointResponse;

class GetAccessPointResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetAccessPointResponsePrivate(GetAccessPointResponse * const q);

    void parseGetAccessPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessPointResponse)
    Q_DISABLE_COPY(GetAccessPointResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
