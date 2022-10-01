// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKRESPONSE_P_H
#define QTAWS_DELETETASKRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DeleteTaskResponse;

class DeleteTaskResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DeleteTaskResponsePrivate(DeleteTaskResponse * const q);

    void parseDeleteTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTaskResponse)
    Q_DISABLE_COPY(DeleteTaskResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
