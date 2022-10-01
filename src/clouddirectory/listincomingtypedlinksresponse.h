// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINCOMINGTYPEDLINKSRESPONSE_H
#define QTAWS_LISTINCOMINGTYPEDLINKSRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listincomingtypedlinksrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListIncomingTypedLinksResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListIncomingTypedLinksResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListIncomingTypedLinksResponse(const ListIncomingTypedLinksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIncomingTypedLinksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIncomingTypedLinksResponse)
    Q_DISABLE_COPY(ListIncomingTypedLinksResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
