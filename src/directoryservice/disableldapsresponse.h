// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLELDAPSRESPONSE_H
#define QTAWS_DISABLELDAPSRESPONSE_H

#include "directoryserviceresponse.h"
#include "disableldapsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableLDAPSResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DisableLDAPSResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DisableLDAPSResponse(const DisableLDAPSRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableLDAPSRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableLDAPSResponse)
    Q_DISABLE_COPY(DisableLDAPSResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
