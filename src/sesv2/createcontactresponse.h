// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTRESPONSE_H
#define QTAWS_CREATECONTACTRESPONSE_H

#include "sesv2response.h"
#include "createcontactrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateContactResponsePrivate;

class QTAWSSESV2_EXPORT CreateContactResponse : public SESv2Response {
    Q_OBJECT

public:
    CreateContactResponse(const CreateContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactResponse)
    Q_DISABLE_COPY(CreateContactResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
