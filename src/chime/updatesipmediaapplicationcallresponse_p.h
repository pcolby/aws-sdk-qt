// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPMEDIAAPPLICATIONCALLRESPONSE_P_H
#define QTAWS_UPDATESIPMEDIAAPPLICATIONCALLRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateSipMediaApplicationCallResponse;

class UpdateSipMediaApplicationCallResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateSipMediaApplicationCallResponsePrivate(UpdateSipMediaApplicationCallResponse * const q);

    void parseUpdateSipMediaApplicationCallResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSipMediaApplicationCallResponse)
    Q_DISABLE_COPY(UpdateSipMediaApplicationCallResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
