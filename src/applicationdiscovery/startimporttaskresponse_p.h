// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTTASKRESPONSE_P_H
#define QTAWS_STARTIMPORTTASKRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartImportTaskResponse;

class StartImportTaskResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit StartImportTaskResponsePrivate(StartImportTaskResponse * const q);

    void parseStartImportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartImportTaskResponse)
    Q_DISABLE_COPY(StartImportTaskResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
