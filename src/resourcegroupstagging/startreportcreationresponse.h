// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPORTCREATIONRESPONSE_H
#define QTAWS_STARTREPORTCREATIONRESPONSE_H

#include "resourcegroupstaggingresponse.h"
#include "startreportcreationrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class StartReportCreationResponsePrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT StartReportCreationResponse : public ResourceGroupsTaggingResponse {
    Q_OBJECT

public:
    StartReportCreationResponse(const StartReportCreationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartReportCreationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReportCreationResponse)
    Q_DISABLE_COPY(StartReportCreationResponse)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
