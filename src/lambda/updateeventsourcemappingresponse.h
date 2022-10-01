// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTSOURCEMAPPINGRESPONSE_H
#define QTAWS_UPDATEEVENTSOURCEMAPPINGRESPONSE_H

#include "lambdaresponse.h"
#include "updateeventsourcemappingrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateEventSourceMappingResponsePrivate;

class QTAWSLAMBDA_EXPORT UpdateEventSourceMappingResponse : public LambdaResponse {
    Q_OBJECT

public:
    UpdateEventSourceMappingResponse(const UpdateEventSourceMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventSourceMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventSourceMappingResponse)
    Q_DISABLE_COPY(UpdateEventSourceMappingResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
