// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISKRESPONSE_P_H
#define QTAWS_DELETEDISKRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteDiskResponse;

class DeleteDiskResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteDiskResponsePrivate(DeleteDiskResponse * const q);

    void parseDeleteDiskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDiskResponse)
    Q_DISABLE_COPY(DeleteDiskResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
