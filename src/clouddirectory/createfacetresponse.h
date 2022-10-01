// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFACETRESPONSE_H
#define QTAWS_CREATEFACETRESPONSE_H

#include "clouddirectoryresponse.h"
#include "createfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateFacetResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateFacetResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    CreateFacetResponse(const CreateFacetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFacetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFacetResponse)
    Q_DISABLE_COPY(CreateFacetResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
