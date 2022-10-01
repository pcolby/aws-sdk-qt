// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTCHANNELRESPONSE_H
#define QTAWS_CREATECONTACTCHANNELRESPONSE_H

#include "ssmcontactsresponse.h"
#include "createcontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class CreateContactChannelResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT CreateContactChannelResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    CreateContactChannelResponse(const CreateContactChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContactChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactChannelResponse)
    Q_DISABLE_COPY(CreateContactChannelResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
