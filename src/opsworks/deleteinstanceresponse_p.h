// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCERESPONSE_P_H
#define QTAWS_DELETEINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DeleteInstanceResponse;

class DeleteInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DeleteInstanceResponsePrivate(DeleteInstanceResponse * const q);

    void parseDeleteInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceResponse)
    Q_DISABLE_COPY(DeleteInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
