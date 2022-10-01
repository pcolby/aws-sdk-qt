// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILESRESPONSE_H
#define QTAWS_LISTPROFILESRESPONSE_H

#include "transferresponse.h"
#include "listprofilesrequest.h"

namespace QtAws {
namespace Transfer {

class ListProfilesResponsePrivate;

class QTAWSTRANSFER_EXPORT ListProfilesResponse : public TransferResponse {
    Q_OBJECT

public:
    ListProfilesResponse(const ListProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfilesResponse)
    Q_DISABLE_COPY(ListProfilesResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
