// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELAMBDAFUNCTIONRESPONSE_H
#define QTAWS_DISASSOCIATELAMBDAFUNCTIONRESPONSE_H

#include "connectresponse.h"
#include "disassociatelambdafunctionrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateLambdaFunctionResponsePrivate;

class QTAWSCONNECT_EXPORT DisassociateLambdaFunctionResponse : public ConnectResponse {
    Q_OBJECT

public:
    DisassociateLambdaFunctionResponse(const DisassociateLambdaFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateLambdaFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLambdaFunctionResponse)
    Q_DISABLE_COPY(DisassociateLambdaFunctionResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
