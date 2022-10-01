// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINVITATIONSRESPONSE_H
#define QTAWS_DELETEINVITATIONSRESPONSE_H

#include "macie2response.h"
#include "deleteinvitationsrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteInvitationsResponsePrivate;

class QTAWSMACIE2_EXPORT DeleteInvitationsResponse : public Macie2Response {
    Q_OBJECT

public:
    DeleteInvitationsResponse(const DeleteInvitationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInvitationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInvitationsResponse)
    Q_DISABLE_COPY(DeleteInvitationsResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
