// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBSRESPONSE_H
#define QTAWS_GETJOBSRESPONSE_H

#include "glueresponse.h"
#include "getjobsrequest.h"

namespace QtAws {
namespace Glue {

class GetJobsResponsePrivate;

class QTAWSGLUE_EXPORT GetJobsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetJobsResponse(const GetJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobsResponse)
    Q_DISABLE_COPY(GetJobsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
