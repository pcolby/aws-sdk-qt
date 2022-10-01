// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERRESPONSE_H
#define QTAWS_DISASSOCIATEMEMBERRESPONSE_H

#include "inspector2response.h"
#include "disassociatememberrequest.h"

namespace QtAws {
namespace Inspector2 {

class DisassociateMemberResponsePrivate;

class QTAWSINSPECTOR2_EXPORT DisassociateMemberResponse : public Inspector2Response {
    Q_OBJECT

public:
    DisassociateMemberResponse(const DisassociateMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMemberResponse)
    Q_DISABLE_COPY(DisassociateMemberResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
