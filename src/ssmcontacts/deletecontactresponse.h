// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTRESPONSE_H
#define QTAWS_DELETECONTACTRESPONSE_H

#include "ssmcontactsresponse.h"
#include "deletecontactrequest.h"

namespace QtAws {
namespace SsmContacts {

class DeleteContactResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT DeleteContactResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    DeleteContactResponse(const DeleteContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactResponse)
    Q_DISABLE_COPY(DeleteContactResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
