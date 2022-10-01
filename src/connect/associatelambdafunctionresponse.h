// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELAMBDAFUNCTIONRESPONSE_H
#define QTAWS_ASSOCIATELAMBDAFUNCTIONRESPONSE_H

#include "connectresponse.h"
#include "associatelambdafunctionrequest.h"

namespace QtAws {
namespace Connect {

class AssociateLambdaFunctionResponsePrivate;

class QTAWSCONNECT_EXPORT AssociateLambdaFunctionResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociateLambdaFunctionResponse(const AssociateLambdaFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateLambdaFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLambdaFunctionResponse)
    Q_DISABLE_COPY(AssociateLambdaFunctionResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
