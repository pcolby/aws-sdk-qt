// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREPAREQUERYRESPONSE_H
#define QTAWS_PREPAREQUERYRESPONSE_H

#include "timestreamqueryresponse.h"
#include "preparequeryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class PrepareQueryResponsePrivate;

class QTAWSTIMESTREAMQUERY_EXPORT PrepareQueryResponse : public TimestreamQueryResponse {
    Q_OBJECT

public:
    PrepareQueryResponse(const PrepareQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PrepareQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PrepareQueryResponse)
    Q_DISABLE_COPY(PrepareQueryResponse)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
