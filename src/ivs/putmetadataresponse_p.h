// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETADATARESPONSE_P_H
#define QTAWS_PUTMETADATARESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class PutMetadataResponse;

class PutMetadataResponsePrivate : public IvsResponsePrivate {

public:

    explicit PutMetadataResponsePrivate(PutMetadataResponse * const q);

    void parsePutMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMetadataResponse)
    Q_DISABLE_COPY(PutMetadataResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
