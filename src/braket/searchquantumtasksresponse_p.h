// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHQUANTUMTASKSRESPONSE_P_H
#define QTAWS_SEARCHQUANTUMTASKSRESPONSE_P_H

#include "braketresponse_p.h"

namespace QtAws {
namespace Braket {

class SearchQuantumTasksResponse;

class SearchQuantumTasksResponsePrivate : public BraketResponsePrivate {

public:

    explicit SearchQuantumTasksResponsePrivate(SearchQuantumTasksResponse * const q);

    void parseSearchQuantumTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchQuantumTasksResponse)
    Q_DISABLE_COPY(SearchQuantumTasksResponsePrivate)

};

} // namespace Braket
} // namespace QtAws

#endif
