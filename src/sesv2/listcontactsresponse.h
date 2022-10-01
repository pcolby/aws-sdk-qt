// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSRESPONSE_H
#define QTAWS_LISTCONTACTSRESPONSE_H

#include "sesv2response.h"
#include "listcontactsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListContactsResponsePrivate;

class QTAWSSESV2_EXPORT ListContactsResponse : public SESv2Response {
    Q_OBJECT

public:
    ListContactsResponse(const ListContactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactsResponse)
    Q_DISABLE_COPY(ListContactsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
