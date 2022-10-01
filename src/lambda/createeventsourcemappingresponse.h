// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTSOURCEMAPPINGRESPONSE_H
#define QTAWS_CREATEEVENTSOURCEMAPPINGRESPONSE_H

#include "lambdaresponse.h"
#include "createeventsourcemappingrequest.h"

namespace QtAws {
namespace Lambda {

class CreateEventSourceMappingResponsePrivate;

class QTAWSLAMBDA_EXPORT CreateEventSourceMappingResponse : public LambdaResponse {
    Q_OBJECT

public:
    CreateEventSourceMappingResponse(const CreateEventSourceMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEventSourceMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventSourceMappingResponse)
    Q_DISABLE_COPY(CreateEventSourceMappingResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
