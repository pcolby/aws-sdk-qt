// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMERESPONSE_P_H
#define QTAWS_CHIMERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Chime {

class ChimeResponse;

class ChimeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ChimeResponsePrivate(ChimeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChimeResponse)
    Q_DISABLE_COPY(ChimeResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
