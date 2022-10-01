// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINENDPOINTOPTIONSRESPONSE_H
#define QTAWS_UPDATEDOMAINENDPOINTOPTIONSRESPONSE_H

#include "cloudsearchresponse.h"
#include "updatedomainendpointoptionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateDomainEndpointOptionsResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT UpdateDomainEndpointOptionsResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    UpdateDomainEndpointOptionsResponse(const UpdateDomainEndpointOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainEndpointOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainEndpointOptionsResponse)
    Q_DISABLE_COPY(UpdateDomainEndpointOptionsResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
