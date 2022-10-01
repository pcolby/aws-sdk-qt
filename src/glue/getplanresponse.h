// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLANRESPONSE_H
#define QTAWS_GETPLANRESPONSE_H

#include "glueresponse.h"
#include "getplanrequest.h"

namespace QtAws {
namespace Glue {

class GetPlanResponsePrivate;

class QTAWSGLUE_EXPORT GetPlanResponse : public GlueResponse {
    Q_OBJECT

public:
    GetPlanResponse(const GetPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlanResponse)
    Q_DISABLE_COPY(GetPlanResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
