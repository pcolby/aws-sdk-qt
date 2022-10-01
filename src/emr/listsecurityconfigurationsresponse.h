// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTSECURITYCONFIGURATIONSRESPONSE_H

#include "emrresponse.h"
#include "listsecurityconfigurationsrequest.h"

namespace QtAws {
namespace Emr {

class ListSecurityConfigurationsResponsePrivate;

class QTAWSEMR_EXPORT ListSecurityConfigurationsResponse : public EmrResponse {
    Q_OBJECT

public:
    ListSecurityConfigurationsResponse(const ListSecurityConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSecurityConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityConfigurationsResponse)
    Q_DISABLE_COPY(ListSecurityConfigurationsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
