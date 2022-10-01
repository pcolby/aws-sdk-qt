// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRUNSRESPONSE_H
#define QTAWS_GETJOBRUNSRESPONSE_H

#include "glueresponse.h"
#include "getjobrunsrequest.h"

namespace QtAws {
namespace Glue {

class GetJobRunsResponsePrivate;

class QTAWSGLUE_EXPORT GetJobRunsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetJobRunsResponse(const GetJobRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobRunsResponse)
    Q_DISABLE_COPY(GetJobRunsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
