// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTCHANNELRESPONSE_H
#define QTAWS_DELETECONTACTCHANNELRESPONSE_H

#include "ssmcontactsresponse.h"
#include "deletecontactchannelrequest.h"

namespace QtAws {
namespace SsmContacts {

class DeleteContactChannelResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT DeleteContactChannelResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    DeleteContactChannelResponse(const DeleteContactChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContactChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactChannelResponse)
    Q_DISABLE_COPY(DeleteContactChannelResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
