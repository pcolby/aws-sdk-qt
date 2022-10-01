// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESHARERESPONSE_P_H
#define QTAWS_DELETERESOURCESHARERESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class DeleteResourceShareResponse;

class DeleteResourceShareResponsePrivate : public RamResponsePrivate {

public:

    explicit DeleteResourceShareResponsePrivate(DeleteResourceShareResponse * const q);

    void parseDeleteResourceShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourceShareResponse)
    Q_DISABLE_COPY(DeleteResourceShareResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
