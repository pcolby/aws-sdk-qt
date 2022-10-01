// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTRESPONSE_H
#define QTAWS_CREATECONTACTRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "createcontactrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateContactResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateContactResponse : public AlexaForBusinessResponse {
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

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
