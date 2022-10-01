// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELQUANTUMTASKRESPONSE_H
#define QTAWS_CANCELQUANTUMTASKRESPONSE_H

#include "braketresponse.h"
#include "cancelquantumtaskrequest.h"

namespace QtAws {
namespace Braket {

class CancelQuantumTaskResponsePrivate;

class QTAWSBRAKET_EXPORT CancelQuantumTaskResponse : public BraketResponse {
    Q_OBJECT

public:
    CancelQuantumTaskResponse(const CancelQuantumTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelQuantumTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelQuantumTaskResponse)
    Q_DISABLE_COPY(CancelQuantumTaskResponse)

};

} // namespace Braket
} // namespace QtAws

#endif
