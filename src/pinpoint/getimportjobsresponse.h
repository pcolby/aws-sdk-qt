// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBSRESPONSE_H
#define QTAWS_GETIMPORTJOBSRESPONSE_H

#include "pinpointresponse.h"
#include "getimportjobsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetImportJobsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetImportJobsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetImportJobsResponse(const GetImportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImportJobsResponse)
    Q_DISABLE_COPY(GetImportJobsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
