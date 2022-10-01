// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFACETFROMOBJECTRESPONSE_H
#define QTAWS_REMOVEFACETFROMOBJECTRESPONSE_H

#include "clouddirectoryresponse.h"
#include "removefacetfromobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class RemoveFacetFromObjectResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT RemoveFacetFromObjectResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    RemoveFacetFromObjectResponse(const RemoveFacetFromObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveFacetFromObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFacetFromObjectResponse)
    Q_DISABLE_COPY(RemoveFacetFromObjectResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
