// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGERESPONSE_H
#define QTAWS_UPDATEPACKAGERESPONSE_H

#include "opensearchresponse.h"
#include "updatepackagerequest.h"

namespace QtAws {
namespace OpenSearch {

class UpdatePackageResponsePrivate;

class QTAWSOPENSEARCH_EXPORT UpdatePackageResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    UpdatePackageResponse(const UpdatePackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePackageResponse)
    Q_DISABLE_COPY(UpdatePackageResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
