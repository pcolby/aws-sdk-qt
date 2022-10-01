// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTLISTRESPONSE_H
#define QTAWS_GETCONTACTLISTRESPONSE_H

#include "sesv2response.h"
#include "getcontactlistrequest.h"

namespace QtAws {
namespace SESv2 {

class GetContactListResponsePrivate;

class QTAWSSESV2_EXPORT GetContactListResponse : public SESv2Response {
    Q_OBJECT

public:
    GetContactListResponse(const GetContactListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContactListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactListResponse)
    Q_DISABLE_COPY(GetContactListResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
