// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFACETRESPONSE_H
#define QTAWS_UPDATEFACETRESPONSE_H

#include "clouddirectoryresponse.h"
#include "updatefacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateFacetResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpdateFacetResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    UpdateFacetResponse(const UpdateFacetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFacetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFacetResponse)
    Q_DISABLE_COPY(UpdateFacetResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
