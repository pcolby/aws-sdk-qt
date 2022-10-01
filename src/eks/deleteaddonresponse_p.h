// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADDONRESPONSE_P_H
#define QTAWS_DELETEADDONRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DeleteAddonResponse;

class DeleteAddonResponsePrivate : public EksResponsePrivate {

public:

    explicit DeleteAddonResponsePrivate(DeleteAddonResponse * const q);

    void parseDeleteAddonResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAddonResponse)
    Q_DISABLE_COPY(DeleteAddonResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
