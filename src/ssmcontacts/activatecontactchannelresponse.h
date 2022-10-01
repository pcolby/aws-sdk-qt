// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATECONTACTCHANNELRESPONSE_H
#define QTAWS_ACTIVATECONTACTCHANNELRESPONSE_H

#include "ssmcontactsresponse.h"
#include "activatecontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class ActivateContactChannelResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT ActivateContactChannelResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    ActivateContactChannelResponse(const ActivateContactChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivateContactChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateContactChannelResponse)
    Q_DISABLE_COPY(ActivateContactChannelResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
