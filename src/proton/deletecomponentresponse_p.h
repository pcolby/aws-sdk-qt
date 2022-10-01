// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTRESPONSE_P_H
#define QTAWS_DELETECOMPONENTRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class DeleteComponentResponse;

class DeleteComponentResponsePrivate : public ProtonResponsePrivate {

public:

    explicit DeleteComponentResponsePrivate(DeleteComponentResponse * const q);

    void parseDeleteComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteComponentResponse)
    Q_DISABLE_COPY(DeleteComponentResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
