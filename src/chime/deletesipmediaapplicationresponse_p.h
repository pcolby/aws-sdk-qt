// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIPMEDIAAPPLICATIONRESPONSE_P_H
#define QTAWS_DELETESIPMEDIAAPPLICATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteSipMediaApplicationResponse;

class DeleteSipMediaApplicationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteSipMediaApplicationResponsePrivate(DeleteSipMediaApplicationResponse * const q);

    void parseDeleteSipMediaApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSipMediaApplicationResponse)
    Q_DISABLE_COPY(DeleteSipMediaApplicationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
