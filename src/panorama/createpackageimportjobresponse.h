// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGEIMPORTJOBRESPONSE_H
#define QTAWS_CREATEPACKAGEIMPORTJOBRESPONSE_H

#include "panoramaresponse.h"
#include "createpackageimportjobrequest.h"

namespace QtAws {
namespace Panorama {

class CreatePackageImportJobResponsePrivate;

class QTAWSPANORAMA_EXPORT CreatePackageImportJobResponse : public PanoramaResponse {
    Q_OBJECT

public:
    CreatePackageImportJobResponse(const CreatePackageImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePackageImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePackageImportJobResponse)
    Q_DISABLE_COPY(CreatePackageImportJobResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
