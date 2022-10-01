// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTPAGERESPONSE_H
#define QTAWS_ACCEPTPAGERESPONSE_H

#include "ssmcontactsresponse.h"
#include "acceptpagerequest.h"

namespace QtAws {
namespace SsmContacts {

class AcceptPageResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT AcceptPageResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    AcceptPageResponse(const AcceptPageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptPageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptPageResponse)
    Q_DISABLE_COPY(AcceptPageResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
