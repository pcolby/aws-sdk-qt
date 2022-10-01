// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPARENTPATHSRESPONSE_H
#define QTAWS_LISTOBJECTPARENTPATHSRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listobjectparentpathsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectParentPathsResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListObjectParentPathsResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListObjectParentPathsResponse(const ListObjectParentPathsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObjectParentPathsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectParentPathsResponse)
    Q_DISABLE_COPY(ListObjectParentPathsResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
