// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAVIEWRESPONSE_P_H
#define QTAWS_CREATEDATAVIEWRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class CreateDataViewResponse;

class CreateDataViewResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit CreateDataViewResponsePrivate(CreateDataViewResponse * const q);

    void parseCreateDataViewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataViewResponse)
    Q_DISABLE_COPY(CreateDataViewResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
