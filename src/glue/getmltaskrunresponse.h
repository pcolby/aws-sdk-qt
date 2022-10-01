// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTASKRUNRESPONSE_H
#define QTAWS_GETMLTASKRUNRESPONSE_H

#include "glueresponse.h"
#include "getmltaskrunrequest.h"

namespace QtAws {
namespace Glue {

class GetMLTaskRunResponsePrivate;

class QTAWSGLUE_EXPORT GetMLTaskRunResponse : public GlueResponse {
    Q_OBJECT

public:
    GetMLTaskRunResponse(const GetMLTaskRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMLTaskRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMLTaskRunResponse)
    Q_DISABLE_COPY(GetMLTaskRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
