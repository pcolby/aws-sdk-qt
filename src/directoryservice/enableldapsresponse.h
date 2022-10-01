// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLELDAPSRESPONSE_H
#define QTAWS_ENABLELDAPSRESPONSE_H

#include "directoryserviceresponse.h"
#include "enableldapsrequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableLDAPSResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT EnableLDAPSResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    EnableLDAPSResponse(const EnableLDAPSRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableLDAPSRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableLDAPSResponse)
    Q_DISABLE_COPY(EnableLDAPSResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
