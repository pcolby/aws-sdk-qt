// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAVIEWRESPONSE_P_H
#define QTAWS_GETDATAVIEWRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class GetDataViewResponse;

class GetDataViewResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit GetDataViewResponsePrivate(GetDataViewResponse * const q);

    void parseGetDataViewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataViewResponse)
    Q_DISABLE_COPY(GetDataViewResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
