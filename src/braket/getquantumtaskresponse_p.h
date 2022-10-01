// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUANTUMTASKRESPONSE_P_H
#define QTAWS_GETQUANTUMTASKRESPONSE_P_H

#include "braketresponse_p.h"

namespace QtAws {
namespace Braket {

class GetQuantumTaskResponse;

class GetQuantumTaskResponsePrivate : public BraketResponsePrivate {

public:

    explicit GetQuantumTaskResponsePrivate(GetQuantumTaskResponse * const q);

    void parseGetQuantumTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQuantumTaskResponse)
    Q_DISABLE_COPY(GetQuantumTaskResponsePrivate)

};

} // namespace Braket
} // namespace QtAws

#endif
