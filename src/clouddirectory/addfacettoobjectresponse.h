// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFACETTOOBJECTRESPONSE_H
#define QTAWS_ADDFACETTOOBJECTRESPONSE_H

#include "clouddirectoryresponse.h"
#include "addfacettoobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AddFacetToObjectResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT AddFacetToObjectResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    AddFacetToObjectResponse(const AddFacetToObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddFacetToObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddFacetToObjectResponse)
    Q_DISABLE_COPY(AddFacetToObjectResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
