// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBRESPONSE_H
#define QTAWS_GETIMPORTJOBRESPONSE_H

#include "pinpointresponse.h"
#include "getimportjobrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetImportJobResponsePrivate;

class QTAWSPINPOINT_EXPORT GetImportJobResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetImportJobResponse(const GetImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImportJobResponse)
    Q_DISABLE_COPY(GetImportJobResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
