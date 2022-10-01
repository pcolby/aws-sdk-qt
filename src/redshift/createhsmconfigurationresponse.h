// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEHSMCONFIGURATIONRESPONSE_H

#include "redshiftresponse.h"
#include "createhsmconfigurationrequest.h"

namespace QtAws {
namespace Redshift {

class CreateHsmConfigurationResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateHsmConfigurationResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateHsmConfigurationResponse(const CreateHsmConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHsmConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHsmConfigurationResponse)
    Q_DISABLE_COPY(CreateHsmConfigurationResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
