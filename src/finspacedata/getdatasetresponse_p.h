// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETRESPONSE_P_H
#define QTAWS_GETDATASETRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class GetDatasetResponse;

class GetDatasetResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit GetDatasetResponsePrivate(GetDatasetResponse * const q);

    void parseGetDatasetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDatasetResponse)
    Q_DISABLE_COPY(GetDatasetResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
