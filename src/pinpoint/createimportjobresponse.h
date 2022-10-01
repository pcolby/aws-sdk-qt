// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMPORTJOBRESPONSE_H
#define QTAWS_CREATEIMPORTJOBRESPONSE_H

#include "pinpointresponse.h"
#include "createimportjobrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateImportJobResponsePrivate;

class QTAWSPINPOINT_EXPORT CreateImportJobResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateImportJobResponse(const CreateImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImportJobResponse)
    Q_DISABLE_COPY(CreateImportJobResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
