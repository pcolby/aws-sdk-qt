// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOMEMBERRESPONSE_H
#define QTAWS_GETSTUDIOMEMBERRESPONSE_H

#include "nimbleresponse.h"
#include "getstudiomemberrequest.h"

namespace QtAws {
namespace Nimble {

class GetStudioMemberResponsePrivate;

class QTAWSNIMBLE_EXPORT GetStudioMemberResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetStudioMemberResponse(const GetStudioMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStudioMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStudioMemberResponse)
    Q_DISABLE_COPY(GetStudioMemberResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
