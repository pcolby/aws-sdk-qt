// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPARENTSRESPONSE_H
#define QTAWS_LISTOBJECTPARENTSRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listobjectparentsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectParentsResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListObjectParentsResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListObjectParentsResponse(const ListObjectParentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObjectParentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectParentsResponse)
    Q_DISABLE_COPY(ListObjectParentsResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
