// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOCKPUBLICACCESSCONFIGURATIONRESPONSE_H
#define QTAWS_GETBLOCKPUBLICACCESSCONFIGURATIONRESPONSE_H

#include "emrresponse.h"
#include "getblockpublicaccessconfigurationrequest.h"

namespace QtAws {
namespace Emr {

class GetBlockPublicAccessConfigurationResponsePrivate;

class QTAWSEMR_EXPORT GetBlockPublicAccessConfigurationResponse : public EmrResponse {
    Q_OBJECT

public:
    GetBlockPublicAccessConfigurationResponse(const GetBlockPublicAccessConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBlockPublicAccessConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlockPublicAccessConfigurationResponse)
    Q_DISABLE_COPY(GetBlockPublicAccessConfigurationResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
