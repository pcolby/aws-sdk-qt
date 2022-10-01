// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVENDPOINTSRESPONSE_H
#define QTAWS_LISTDEVENDPOINTSRESPONSE_H

#include "glueresponse.h"
#include "listdevendpointsrequest.h"

namespace QtAws {
namespace Glue {

class ListDevEndpointsResponsePrivate;

class QTAWSGLUE_EXPORT ListDevEndpointsResponse : public GlueResponse {
    Q_OBJECT

public:
    ListDevEndpointsResponse(const ListDevEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDevEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevEndpointsResponse)
    Q_DISABLE_COPY(ListDevEndpointsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
