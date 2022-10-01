// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUANTUMTASKRESPONSE_P_H
#define QTAWS_CREATEQUANTUMTASKRESPONSE_P_H

#include "braketresponse_p.h"

namespace QtAws {
namespace Braket {

class CreateQuantumTaskResponse;

class CreateQuantumTaskResponsePrivate : public BraketResponsePrivate {

public:

    explicit CreateQuantumTaskResponsePrivate(CreateQuantumTaskResponse * const q);

    void parseCreateQuantumTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateQuantumTaskResponse)
    Q_DISABLE_COPY(CreateQuantumTaskResponsePrivate)

};

} // namespace Braket
} // namespace QtAws

#endif
