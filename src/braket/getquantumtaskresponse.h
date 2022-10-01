// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUANTUMTASKRESPONSE_H
#define QTAWS_GETQUANTUMTASKRESPONSE_H

#include "braketresponse.h"
#include "getquantumtaskrequest.h"

namespace QtAws {
namespace Braket {

class GetQuantumTaskResponsePrivate;

class QTAWSBRAKET_EXPORT GetQuantumTaskResponse : public BraketResponse {
    Q_OBJECT

public:
    GetQuantumTaskResponse(const GetQuantumTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQuantumTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQuantumTaskResponse)
    Q_DISABLE_COPY(GetQuantumTaskResponse)

};

} // namespace Braket
} // namespace QtAws

#endif
