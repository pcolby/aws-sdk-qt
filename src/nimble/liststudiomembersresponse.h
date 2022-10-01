// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOMEMBERSRESPONSE_H
#define QTAWS_LISTSTUDIOMEMBERSRESPONSE_H

#include "nimbleresponse.h"
#include "liststudiomembersrequest.h"

namespace QtAws {
namespace Nimble {

class ListStudioMembersResponsePrivate;

class QTAWSNIMBLE_EXPORT ListStudioMembersResponse : public NimbleResponse {
    Q_OBJECT

public:
    ListStudioMembersResponse(const ListStudioMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStudioMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudioMembersResponse)
    Q_DISABLE_COPY(ListStudioMembersResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
