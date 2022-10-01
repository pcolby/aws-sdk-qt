// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERSESSIONRESPONSE_H
#define QTAWS_UPDATEMEMBERSESSIONRESPONSE_H

#include "macie2response.h"
#include "updatemembersessionrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateMemberSessionResponsePrivate;

class QTAWSMACIE2_EXPORT UpdateMemberSessionResponse : public Macie2Response {
    Q_OBJECT

public:
    UpdateMemberSessionResponse(const UpdateMemberSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMemberSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMemberSessionResponse)
    Q_DISABLE_COPY(UpdateMemberSessionResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
