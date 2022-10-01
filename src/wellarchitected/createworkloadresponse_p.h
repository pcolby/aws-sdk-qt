// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKLOADRESPONSE_P_H
#define QTAWS_CREATEWORKLOADRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class CreateWorkloadResponse;

class CreateWorkloadResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit CreateWorkloadResponsePrivate(CreateWorkloadResponse * const q);

    void parseCreateWorkloadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkloadResponse)
    Q_DISABLE_COPY(CreateWorkloadResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
