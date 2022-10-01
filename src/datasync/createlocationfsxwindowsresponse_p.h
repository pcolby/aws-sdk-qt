// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXWINDOWSRESPONSE_P_H
#define QTAWS_CREATELOCATIONFSXWINDOWSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxWindowsResponse;

class CreateLocationFsxWindowsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationFsxWindowsResponsePrivate(CreateLocationFsxWindowsResponse * const q);

    void parseCreateLocationFsxWindowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationFsxWindowsResponse)
    Q_DISABLE_COPY(CreateLocationFsxWindowsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
