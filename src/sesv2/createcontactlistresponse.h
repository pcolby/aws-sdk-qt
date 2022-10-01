// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTLISTRESPONSE_H
#define QTAWS_CREATECONTACTLISTRESPONSE_H

#include "sesv2response.h"
#include "createcontactlistrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateContactListResponsePrivate;

class QTAWSSESV2_EXPORT CreateContactListResponse : public SESv2Response {
    Q_OBJECT

public:
    CreateContactListResponse(const CreateContactListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContactListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactListResponse)
    Q_DISABLE_COPY(CreateContactListResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
