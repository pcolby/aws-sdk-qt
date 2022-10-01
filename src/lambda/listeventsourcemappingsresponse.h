// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCEMAPPINGSRESPONSE_H
#define QTAWS_LISTEVENTSOURCEMAPPINGSRESPONSE_H

#include "lambdaresponse.h"
#include "listeventsourcemappingsrequest.h"

namespace QtAws {
namespace Lambda {

class ListEventSourceMappingsResponsePrivate;

class QTAWSLAMBDA_EXPORT ListEventSourceMappingsResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListEventSourceMappingsResponse(const ListEventSourceMappingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventSourceMappingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventSourceMappingsResponse)
    Q_DISABLE_COPY(ListEventSourceMappingsResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
