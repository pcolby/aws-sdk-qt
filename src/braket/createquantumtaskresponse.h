// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUANTUMTASKRESPONSE_H
#define QTAWS_CREATEQUANTUMTASKRESPONSE_H

#include "braketresponse.h"
#include "createquantumtaskrequest.h"

namespace QtAws {
namespace Braket {

class CreateQuantumTaskResponsePrivate;

class QTAWSBRAKET_EXPORT CreateQuantumTaskResponse : public BraketResponse {
    Q_OBJECT

public:
    CreateQuantumTaskResponse(const CreateQuantumTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateQuantumTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQuantumTaskResponse)
    Q_DISABLE_COPY(CreateQuantumTaskResponse)

};

} // namespace Braket
} // namespace QtAws

#endif
