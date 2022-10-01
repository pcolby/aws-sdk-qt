// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPMEDIAAPPLICATIONCALLRESPONSE_P_H
#define QTAWS_CREATESIPMEDIAAPPLICATIONCALLRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateSipMediaApplicationCallResponse;

class CreateSipMediaApplicationCallResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateSipMediaApplicationCallResponsePrivate(CreateSipMediaApplicationCallResponse * const q);

    void parseCreateSipMediaApplicationCallResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSipMediaApplicationCallResponse)
    Q_DISABLE_COPY(CreateSipMediaApplicationCallResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
