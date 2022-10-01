// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTCHANNELRESPONSE_H
#define QTAWS_GETCONTACTCHANNELRESPONSE_H

#include "ssmcontactsresponse.h"
#include "getcontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class GetContactChannelResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT GetContactChannelResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    GetContactChannelResponse(const GetContactChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContactChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactChannelResponse)
    Q_DISABLE_COPY(GetContactChannelResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
