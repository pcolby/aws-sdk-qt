// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSVERSIONDIFFERENCERESPONSE_P_H
#define QTAWS_GETLENSVERSIONDIFFERENCERESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class GetLensVersionDifferenceResponse;

class GetLensVersionDifferenceResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit GetLensVersionDifferenceResponsePrivate(GetLensVersionDifferenceResponse * const q);

    void parseGetLensVersionDifferenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLensVersionDifferenceResponse)
    Q_DISABLE_COPY(GetLensVersionDifferenceResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
