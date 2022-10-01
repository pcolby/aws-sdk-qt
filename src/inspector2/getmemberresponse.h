// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERRESPONSE_H
#define QTAWS_GETMEMBERRESPONSE_H

#include "inspector2response.h"
#include "getmemberrequest.h"

namespace QtAws {
namespace Inspector2 {

class GetMemberResponsePrivate;

class QTAWSINSPECTOR2_EXPORT GetMemberResponse : public Inspector2Response {
    Q_OBJECT

public:
    GetMemberResponse(const GetMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMemberResponse)
    Q_DISABLE_COPY(GetMemberResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
