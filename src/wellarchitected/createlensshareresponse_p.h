// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELENSSHARERESPONSE_P_H
#define QTAWS_CREATELENSSHARERESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class CreateLensShareResponse;

class CreateLensShareResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit CreateLensShareResponsePrivate(CreateLensShareResponse * const q);

    void parseCreateLensShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLensShareResponse)
    Q_DISABLE_COPY(CreateLensShareResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
