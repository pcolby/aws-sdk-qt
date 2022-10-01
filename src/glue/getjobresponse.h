// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRESPONSE_H
#define QTAWS_GETJOBRESPONSE_H

#include "glueresponse.h"
#include "getjobrequest.h"

namespace QtAws {
namespace Glue {

class GetJobResponsePrivate;

class QTAWSGLUE_EXPORT GetJobResponse : public GlueResponse {
    Q_OBJECT

public:
    GetJobResponse(const GetJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobResponse)
    Q_DISABLE_COPY(GetJobResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
