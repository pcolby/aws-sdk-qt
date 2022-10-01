// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTLABELSTASKRUNRESPONSE_H
#define QTAWS_STARTIMPORTLABELSTASKRUNRESPONSE_H

#include "glueresponse.h"
#include "startimportlabelstaskrunrequest.h"

namespace QtAws {
namespace Glue {

class StartImportLabelsTaskRunResponsePrivate;

class QTAWSGLUE_EXPORT StartImportLabelsTaskRunResponse : public GlueResponse {
    Q_OBJECT

public:
    StartImportLabelsTaskRunResponse(const StartImportLabelsTaskRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartImportLabelsTaskRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImportLabelsTaskRunResponse)
    Q_DISABLE_COPY(StartImportLabelsTaskRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
