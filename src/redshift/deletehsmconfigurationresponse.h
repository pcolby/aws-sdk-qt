// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEHSMCONFIGURATIONRESPONSE_H

#include "redshiftresponse.h"
#include "deletehsmconfigurationrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteHsmConfigurationResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeleteHsmConfigurationResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteHsmConfigurationResponse(const DeleteHsmConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHsmConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHsmConfigurationResponse)
    Q_DISABLE_COPY(DeleteHsmConfigurationResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
