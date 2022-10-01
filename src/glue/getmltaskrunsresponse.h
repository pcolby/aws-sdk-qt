// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTASKRUNSRESPONSE_H
#define QTAWS_GETMLTASKRUNSRESPONSE_H

#include "glueresponse.h"
#include "getmltaskrunsrequest.h"

namespace QtAws {
namespace Glue {

class GetMLTaskRunsResponsePrivate;

class QTAWSGLUE_EXPORT GetMLTaskRunsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetMLTaskRunsResponse(const GetMLTaskRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMLTaskRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMLTaskRunsResponse)
    Q_DISABLE_COPY(GetMLTaskRunsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
