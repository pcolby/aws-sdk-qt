// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTUDIOMEMBERSRESPONSE_H
#define QTAWS_PUTSTUDIOMEMBERSRESPONSE_H

#include "nimbleresponse.h"
#include "putstudiomembersrequest.h"

namespace QtAws {
namespace Nimble {

class PutStudioMembersResponsePrivate;

class QTAWSNIMBLE_EXPORT PutStudioMembersResponse : public NimbleResponse {
    Q_OBJECT

public:
    PutStudioMembersResponse(const PutStudioMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutStudioMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutStudioMembersResponse)
    Q_DISABLE_COPY(PutStudioMembersResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
