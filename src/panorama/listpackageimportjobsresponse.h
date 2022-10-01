// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEIMPORTJOBSRESPONSE_H
#define QTAWS_LISTPACKAGEIMPORTJOBSRESPONSE_H

#include "panoramaresponse.h"
#include "listpackageimportjobsrequest.h"

namespace QtAws {
namespace Panorama {

class ListPackageImportJobsResponsePrivate;

class QTAWSPANORAMA_EXPORT ListPackageImportJobsResponse : public PanoramaResponse {
    Q_OBJECT

public:
    ListPackageImportJobsResponse(const ListPackageImportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPackageImportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackageImportJobsResponse)
    Q_DISABLE_COPY(ListPackageImportJobsResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
