// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSRESPONSE_P_H
#define QTAWS_LISTRECOVERYPOINTSRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class ListRecoveryPointsResponse;

class ListRecoveryPointsResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit ListRecoveryPointsResponsePrivate(ListRecoveryPointsResponse * const q);

    void parseListRecoveryPointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecoveryPointsResponse)
    Q_DISABLE_COPY(ListRecoveryPointsResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
