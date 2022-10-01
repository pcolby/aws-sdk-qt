// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHARVESTJOBSRESPONSE_H
#define QTAWS_LISTHARVESTJOBSRESPONSE_H

#include "mediapackageresponse.h"
#include "listharvestjobsrequest.h"

namespace QtAws {
namespace MediaPackage {

class ListHarvestJobsResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT ListHarvestJobsResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    ListHarvestJobsResponse(const ListHarvestJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHarvestJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHarvestJobsResponse)
    Q_DISABLE_COPY(ListHarvestJobsResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
