// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTCHILDRENRESPONSE_H
#define QTAWS_LISTOBJECTCHILDRENRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listobjectchildrenrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectChildrenResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListObjectChildrenResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListObjectChildrenResponse(const ListObjectChildrenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObjectChildrenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectChildrenResponse)
    Q_DISABLE_COPY(ListObjectChildrenResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
