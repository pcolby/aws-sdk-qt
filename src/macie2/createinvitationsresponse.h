// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINVITATIONSRESPONSE_H
#define QTAWS_CREATEINVITATIONSRESPONSE_H

#include "macie2response.h"
#include "createinvitationsrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateInvitationsResponsePrivate;

class QTAWSMACIE2_EXPORT CreateInvitationsResponse : public Macie2Response {
    Q_OBJECT

public:
    CreateInvitationsResponse(const CreateInvitationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInvitationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInvitationsResponse)
    Q_DISABLE_COPY(CreateInvitationsResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
