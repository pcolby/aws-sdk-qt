// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTATTRIBUTESRESPONSE_H
#define QTAWS_LISTOBJECTATTRIBUTESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listobjectattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectAttributesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListObjectAttributesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListObjectAttributesResponse(const ListObjectAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObjectAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectAttributesResponse)
    Q_DISABLE_COPY(ListObjectAttributesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
