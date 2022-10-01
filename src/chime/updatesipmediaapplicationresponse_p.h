// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPMEDIAAPPLICATIONRESPONSE_P_H
#define QTAWS_UPDATESIPMEDIAAPPLICATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateSipMediaApplicationResponse;

class UpdateSipMediaApplicationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateSipMediaApplicationResponsePrivate(UpdateSipMediaApplicationResponse * const q);

    void parseUpdateSipMediaApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSipMediaApplicationResponse)
    Q_DISABLE_COPY(UpdateSipMediaApplicationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
