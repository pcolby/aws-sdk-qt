// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACETRESPONSE_H
#define QTAWS_GETFACETRESPONSE_H

#include "clouddirectoryresponse.h"
#include "getfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetFacetResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetFacetResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    GetFacetResponse(const GetFacetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFacetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFacetResponse)
    Q_DISABLE_COPY(GetFacetResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
