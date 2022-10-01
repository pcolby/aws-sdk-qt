// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEDATASYNCRESPONSE_P_H
#define QTAWS_DELETERESOURCEDATASYNCRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeleteResourceDataSyncResponse;

class DeleteResourceDataSyncResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeleteResourceDataSyncResponsePrivate(DeleteResourceDataSyncResponse * const q);

    void parseDeleteResourceDataSyncResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourceDataSyncResponse)
    Q_DISABLE_COPY(DeleteResourceDataSyncResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
