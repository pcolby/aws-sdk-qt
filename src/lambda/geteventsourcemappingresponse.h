// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSOURCEMAPPINGRESPONSE_H
#define QTAWS_GETEVENTSOURCEMAPPINGRESPONSE_H

#include "lambdaresponse.h"
#include "geteventsourcemappingrequest.h"

namespace QtAws {
namespace Lambda {

class GetEventSourceMappingResponsePrivate;

class QTAWSLAMBDA_EXPORT GetEventSourceMappingResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetEventSourceMappingResponse(const GetEventSourceMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventSourceMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventSourceMappingResponse)
    Q_DISABLE_COPY(GetEventSourceMappingResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
