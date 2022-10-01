// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELQUANTUMTASKRESPONSE_P_H
#define QTAWS_CANCELQUANTUMTASKRESPONSE_P_H

#include "braketresponse_p.h"

namespace QtAws {
namespace Braket {

class CancelQuantumTaskResponse;

class CancelQuantumTaskResponsePrivate : public BraketResponsePrivate {

public:

    explicit CancelQuantumTaskResponsePrivate(CancelQuantumTaskResponse * const q);

    void parseCancelQuantumTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelQuantumTaskResponse)
    Q_DISABLE_COPY(CancelQuantumTaskResponsePrivate)

};

} // namespace Braket
} // namespace QtAws

#endif
