// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERRESPONSE_H
#define QTAWS_ASSOCIATEMEMBERRESPONSE_H

#include "inspector2response.h"
#include "associatememberrequest.h"

namespace QtAws {
namespace Inspector2 {

class AssociateMemberResponsePrivate;

class QTAWSINSPECTOR2_EXPORT AssociateMemberResponse : public Inspector2Response {
    Q_OBJECT

public:
    AssociateMemberResponse(const AssociateMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateMemberResponse)
    Q_DISABLE_COPY(AssociateMemberResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
