// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPCERTIFICATEAUTHORITIESRESPONSE_H
#define QTAWS_LISTGROUPCERTIFICATEAUTHORITIESRESPONSE_H

#include "greengrassresponse.h"
#include "listgroupcertificateauthoritiesrequest.h"

namespace QtAws {
namespace Greengrass {

class ListGroupCertificateAuthoritiesResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListGroupCertificateAuthoritiesResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListGroupCertificateAuthoritiesResponse(const ListGroupCertificateAuthoritiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupCertificateAuthoritiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupCertificateAuthoritiesResponse)
    Q_DISABLE_COPY(ListGroupCertificateAuthoritiesResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
