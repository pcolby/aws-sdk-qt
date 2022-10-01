// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTNOTEBOOKEXECUTIONSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ListNotebookExecutionsResponse;

class ListNotebookExecutionsResponsePrivate : public EmrResponsePrivate {

public:

    explicit ListNotebookExecutionsResponsePrivate(ListNotebookExecutionsResponse * const q);

    void parseListNotebookExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNotebookExecutionsResponse)
    Q_DISABLE_COPY(ListNotebookExecutionsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
