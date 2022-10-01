// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTRESPONSE_H
#define QTAWS_GETCONTACTRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "getcontactrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetContactResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetContactResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    GetContactResponse(const GetContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactResponse)
    Q_DISABLE_COPY(GetContactResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
