// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKLOADRESPONSE_P_H
#define QTAWS_DELETEWORKLOADRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class DeleteWorkloadResponse;

class DeleteWorkloadResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit DeleteWorkloadResponsePrivate(DeleteWorkloadResponse * const q);

    void parseDeleteWorkloadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkloadResponse)
    Q_DISABLE_COPY(DeleteWorkloadResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
