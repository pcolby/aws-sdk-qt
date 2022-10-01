// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSOURCEMAPPINGRESPONSE_H
#define QTAWS_DELETEEVENTSOURCEMAPPINGRESPONSE_H

#include "lambdaresponse.h"
#include "deleteeventsourcemappingrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteEventSourceMappingResponsePrivate;

class QTAWSLAMBDA_EXPORT DeleteEventSourceMappingResponse : public LambdaResponse {
    Q_OBJECT

public:
    DeleteEventSourceMappingResponse(const DeleteEventSourceMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventSourceMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventSourceMappingResponse)
    Q_DISABLE_COPY(DeleteEventSourceMappingResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
