// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYCONFIGURATIONRESPONSE_H
#define QTAWS_DELETESECURITYCONFIGURATIONRESPONSE_H

#include "emrresponse.h"
#include "deletesecurityconfigurationrequest.h"

namespace QtAws {
namespace Emr {

class DeleteSecurityConfigurationResponsePrivate;

class QTAWSEMR_EXPORT DeleteSecurityConfigurationResponse : public EmrResponse {
    Q_OBJECT

public:
    DeleteSecurityConfigurationResponse(const DeleteSecurityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSecurityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecurityConfigurationResponse)
    Q_DISABLE_COPY(DeleteSecurityConfigurationResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
