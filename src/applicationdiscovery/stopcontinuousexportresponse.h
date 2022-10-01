// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTINUOUSEXPORTRESPONSE_H
#define QTAWS_STOPCONTINUOUSEXPORTRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "stopcontinuousexportrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StopContinuousExportResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StopContinuousExportResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    StopContinuousExportResponse(const StopContinuousExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopContinuousExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopContinuousExportResponse)
    Q_DISABLE_COPY(StopContinuousExportResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
