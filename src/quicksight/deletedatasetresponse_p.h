// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETRESPONSE_P_H
#define QTAWS_DELETEDATASETRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteDataSetResponse;

class DeleteDataSetResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteDataSetResponsePrivate(DeleteDataSetResponse * const q);

    void parseDeleteDataSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDataSetResponse)
    Q_DISABLE_COPY(DeleteDataSetResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
