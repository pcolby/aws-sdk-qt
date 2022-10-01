// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTGOINGTYPEDLINKSRESPONSE_H
#define QTAWS_LISTOUTGOINGTYPEDLINKSRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listoutgoingtypedlinksrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListOutgoingTypedLinksResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListOutgoingTypedLinksResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListOutgoingTypedLinksResponse(const ListOutgoingTypedLinksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOutgoingTypedLinksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOutgoingTypedLinksResponse)
    Q_DISABLE_COPY(ListOutgoingTypedLinksResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
