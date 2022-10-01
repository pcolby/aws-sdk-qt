// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSESSIONSRESPONSE_H
#define QTAWS_LISTSESSIONSRESPONSE_H

#include "glueresponse.h"
#include "listsessionsrequest.h"

namespace QtAws {
namespace Glue {

class ListSessionsResponsePrivate;

class QTAWSGLUE_EXPORT ListSessionsResponse : public GlueResponse {
    Q_OBJECT

public:
    ListSessionsResponse(const ListSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSessionsResponse)
    Q_DISABLE_COPY(ListSessionsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
