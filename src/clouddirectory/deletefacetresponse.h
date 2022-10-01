// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFACETRESPONSE_H
#define QTAWS_DELETEFACETRESPONSE_H

#include "clouddirectoryresponse.h"
#include "deletefacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteFacetResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DeleteFacetResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    DeleteFacetResponse(const DeleteFacetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFacetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFacetResponse)
    Q_DISABLE_COPY(DeleteFacetResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
