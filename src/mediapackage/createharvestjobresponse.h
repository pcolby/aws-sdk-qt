// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHARVESTJOBRESPONSE_H
#define QTAWS_CREATEHARVESTJOBRESPONSE_H

#include "mediapackageresponse.h"
#include "createharvestjobrequest.h"

namespace QtAws {
namespace MediaPackage {

class CreateHarvestJobResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT CreateHarvestJobResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    CreateHarvestJobResponse(const CreateHarvestJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHarvestJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHarvestJobResponse)
    Q_DISABLE_COPY(CreateHarvestJobResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
