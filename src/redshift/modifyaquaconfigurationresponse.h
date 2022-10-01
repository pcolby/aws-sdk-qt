// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAQUACONFIGURATIONRESPONSE_H
#define QTAWS_MODIFYAQUACONFIGURATIONRESPONSE_H

#include "redshiftresponse.h"
#include "modifyaquaconfigurationrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyAquaConfigurationResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyAquaConfigurationResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyAquaConfigurationResponse(const ModifyAquaConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyAquaConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyAquaConfigurationResponse)
    Q_DISABLE_COPY(ModifyAquaConfigurationResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
