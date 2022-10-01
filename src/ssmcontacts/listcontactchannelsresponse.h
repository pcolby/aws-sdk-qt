// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTCHANNELSRESPONSE_H
#define QTAWS_LISTCONTACTCHANNELSRESPONSE_H

#include "ssmcontactsresponse.h"
#include "listcontactchannelsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListContactChannelsResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT ListContactChannelsResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    ListContactChannelsResponse(const ListContactChannelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContactChannelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactChannelsResponse)
    Q_DISABLE_COPY(ListContactChannelsResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
