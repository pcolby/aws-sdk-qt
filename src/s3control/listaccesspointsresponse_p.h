// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOINTSRESPONSE_P_H
#define QTAWS_LISTACCESSPOINTSRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class ListAccessPointsResponse;

class ListAccessPointsResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit ListAccessPointsResponsePrivate(ListAccessPointsResponse * const q);

    void parseListAccessPointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccessPointsResponse)
    Q_DISABLE_COPY(ListAccessPointsResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
