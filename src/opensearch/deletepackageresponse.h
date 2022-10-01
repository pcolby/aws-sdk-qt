// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGERESPONSE_H
#define QTAWS_DELETEPACKAGERESPONSE_H

#include "opensearchresponse.h"
#include "deletepackagerequest.h"

namespace QtAws {
namespace OpenSearch {

class DeletePackageResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DeletePackageResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DeletePackageResponse(const DeletePackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePackageResponse)
    Q_DISABLE_COPY(DeletePackageResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
