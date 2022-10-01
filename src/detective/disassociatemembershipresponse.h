// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERSHIPRESPONSE_H
#define QTAWS_DISASSOCIATEMEMBERSHIPRESPONSE_H

#include "detectiveresponse.h"
#include "disassociatemembershiprequest.h"

namespace QtAws {
namespace Detective {

class DisassociateMembershipResponsePrivate;

class QTAWSDETECTIVE_EXPORT DisassociateMembershipResponse : public DetectiveResponse {
    Q_OBJECT

public:
    DisassociateMembershipResponse(const DisassociateMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMembershipResponse)
    Q_DISABLE_COPY(DisassociateMembershipResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
