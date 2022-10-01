// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPMEDIAAPPLICATIONRESPONSE_P_H
#define QTAWS_CREATESIPMEDIAAPPLICATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateSipMediaApplicationResponse;

class CreateSipMediaApplicationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateSipMediaApplicationResponsePrivate(CreateSipMediaApplicationResponse * const q);

    void parseCreateSipMediaApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSipMediaApplicationResponse)
    Q_DISABLE_COPY(CreateSipMediaApplicationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
