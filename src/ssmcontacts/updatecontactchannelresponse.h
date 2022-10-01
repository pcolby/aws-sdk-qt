// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTCHANNELRESPONSE_H
#define QTAWS_UPDATECONTACTCHANNELRESPONSE_H

#include "ssmcontactsresponse.h"
#include "updatecontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class UpdateContactChannelResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT UpdateContactChannelResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    UpdateContactChannelResponse(const UpdateContactChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactChannelResponse)
    Q_DISABLE_COPY(UpdateContactChannelResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
