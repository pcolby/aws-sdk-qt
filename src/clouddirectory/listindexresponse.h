// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINDEXRESPONSE_H
#define QTAWS_LISTINDEXRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listindexrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListIndexResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListIndexResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListIndexResponse(const ListIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIndexResponse)
    Q_DISABLE_COPY(ListIndexResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
