// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELENSSHARERESPONSE_P_H
#define QTAWS_DELETELENSSHARERESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class DeleteLensShareResponse;

class DeleteLensShareResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit DeleteLensShareResponsePrivate(DeleteLensShareResponse * const q);

    void parseDeleteLensShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLensShareResponse)
    Q_DISABLE_COPY(DeleteLensShareResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
