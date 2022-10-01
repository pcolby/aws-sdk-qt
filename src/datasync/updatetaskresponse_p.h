// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKRESPONSE_P_H
#define QTAWS_UPDATETASKRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class UpdateTaskResponse;

class UpdateTaskResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit UpdateTaskResponsePrivate(UpdateTaskResponse * const q);

    void parseUpdateTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTaskResponse)
    Q_DISABLE_COPY(UpdateTaskResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
