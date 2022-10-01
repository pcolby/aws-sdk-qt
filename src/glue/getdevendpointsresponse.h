// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVENDPOINTSRESPONSE_H
#define QTAWS_GETDEVENDPOINTSRESPONSE_H

#include "glueresponse.h"
#include "getdevendpointsrequest.h"

namespace QtAws {
namespace Glue {

class GetDevEndpointsResponsePrivate;

class QTAWSGLUE_EXPORT GetDevEndpointsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetDevEndpointsResponse(const GetDevEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDevEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevEndpointsResponse)
    Q_DISABLE_COPY(GetDevEndpointsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
