// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCATIONRESPONSE_P_H
#define QTAWS_DELETELOCATIONRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DeleteLocationResponse;

class DeleteLocationResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DeleteLocationResponsePrivate(DeleteLocationResponse * const q);

    void parseDeleteLocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLocationResponse)
    Q_DISABLE_COPY(DeleteLocationResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
