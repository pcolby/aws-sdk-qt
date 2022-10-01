// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDATASYNCRESPONSE_P_H
#define QTAWS_LISTRESOURCEDATASYNCRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListResourceDataSyncResponse;

class ListResourceDataSyncResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListResourceDataSyncResponsePrivate(ListResourceDataSyncResponse * const q);

    void parseListResourceDataSyncResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceDataSyncResponse)
    Q_DISABLE_COPY(ListResourceDataSyncResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
