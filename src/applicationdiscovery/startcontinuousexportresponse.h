// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTINUOUSEXPORTRESPONSE_H
#define QTAWS_STARTCONTINUOUSEXPORTRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "startcontinuousexportrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartContinuousExportResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StartContinuousExportResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    StartContinuousExportResponse(const StartContinuousExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartContinuousExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContinuousExportResponse)
    Q_DISABLE_COPY(StartContinuousExportResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
