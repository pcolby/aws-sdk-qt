// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATECONTACTCHANNELRESPONSE_H
#define QTAWS_DEACTIVATECONTACTCHANNELRESPONSE_H

#include "ssmcontactsresponse.h"
#include "deactivatecontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class DeactivateContactChannelResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT DeactivateContactChannelResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    DeactivateContactChannelResponse(const DeactivateContactChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivateContactChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateContactChannelResponse)
    Q_DISABLE_COPY(DeactivateContactChannelResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
