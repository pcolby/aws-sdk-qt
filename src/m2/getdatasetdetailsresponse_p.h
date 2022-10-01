// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETDETAILSRESPONSE_P_H
#define QTAWS_GETDATASETDETAILSRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class GetDataSetDetailsResponse;

class GetDataSetDetailsResponsePrivate : public M2ResponsePrivate {

public:

    explicit GetDataSetDetailsResponsePrivate(GetDataSetDetailsResponse * const q);

    void parseGetDataSetDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataSetDetailsResponse)
    Q_DISABLE_COPY(GetDataSetDetailsResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
