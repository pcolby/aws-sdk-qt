// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBRESPONSE_H
#define QTAWS_CREATEJOBRESPONSE_H

#include "glueresponse.h"
#include "createjobrequest.h"

namespace QtAws {
namespace Glue {

class CreateJobResponsePrivate;

class QTAWSGLUE_EXPORT CreateJobResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateJobResponse(const CreateJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobResponse)
    Q_DISABLE_COPY(CreateJobResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
