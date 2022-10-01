// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBLOCKPUBLICACCESSCONFIGURATIONRESPONSE_H
#define QTAWS_PUTBLOCKPUBLICACCESSCONFIGURATIONRESPONSE_H

#include "emrresponse.h"
#include "putblockpublicaccessconfigurationrequest.h"

namespace QtAws {
namespace Emr {

class PutBlockPublicAccessConfigurationResponsePrivate;

class QTAWSEMR_EXPORT PutBlockPublicAccessConfigurationResponse : public EmrResponse {
    Q_OBJECT

public:
    PutBlockPublicAccessConfigurationResponse(const PutBlockPublicAccessConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBlockPublicAccessConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBlockPublicAccessConfigurationResponse)
    Q_DISABLE_COPY(PutBlockPublicAccessConfigurationResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
