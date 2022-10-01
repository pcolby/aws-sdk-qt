// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERSRESPONSE_H
#define QTAWS_DELETEMEMBERSRESPONSE_H

#include "securityhubresponse.h"
#include "deletemembersrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteMembersResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DeleteMembersResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DeleteMembersResponse(const DeleteMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMembersResponse)
    Q_DISABLE_COPY(DeleteMembersResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
