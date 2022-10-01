// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPMEDIAAPPLICATIONRESPONSE_P_H
#define QTAWS_GETSIPMEDIAAPPLICATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetSipMediaApplicationResponse;

class GetSipMediaApplicationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetSipMediaApplicationResponsePrivate(GetSipMediaApplicationResponse * const q);

    void parseGetSipMediaApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSipMediaApplicationResponse)
    Q_DISABLE_COPY(GetSipMediaApplicationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
