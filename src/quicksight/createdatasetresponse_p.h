// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETRESPONSE_P_H
#define QTAWS_CREATEDATASETRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateDataSetResponse;

class CreateDataSetResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateDataSetResponsePrivate(CreateDataSetResponse * const q);

    void parseCreateDataSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataSetResponse)
    Q_DISABLE_COPY(CreateDataSetResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
