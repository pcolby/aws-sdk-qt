// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPORTLABELSTASKRUNRESPONSE_H
#define QTAWS_STARTEXPORTLABELSTASKRUNRESPONSE_H

#include "glueresponse.h"
#include "startexportlabelstaskrunrequest.h"

namespace QtAws {
namespace Glue {

class StartExportLabelsTaskRunResponsePrivate;

class QTAWSGLUE_EXPORT StartExportLabelsTaskRunResponse : public GlueResponse {
    Q_OBJECT

public:
    StartExportLabelsTaskRunResponse(const StartExportLabelsTaskRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartExportLabelsTaskRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExportLabelsTaskRunResponse)
    Q_DISABLE_COPY(StartExportLabelsTaskRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
