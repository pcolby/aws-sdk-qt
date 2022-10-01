// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETRESPONSE_P_H
#define QTAWS_UPDATEDATASETRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSetResponse;

class UpdateDataSetResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateDataSetResponsePrivate(UpdateDataSetResponse * const q);

    void parseUpdateDataSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataSetResponse)
    Q_DISABLE_COPY(UpdateDataSetResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
