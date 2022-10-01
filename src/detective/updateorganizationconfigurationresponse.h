// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEORGANIZATIONCONFIGURATIONRESPONSE_H

#include "detectiveresponse.h"
#include "updateorganizationconfigurationrequest.h"

namespace QtAws {
namespace Detective {

class UpdateOrganizationConfigurationResponsePrivate;

class QTAWSDETECTIVE_EXPORT UpdateOrganizationConfigurationResponse : public DetectiveResponse {
    Q_OBJECT

public:
    UpdateOrganizationConfigurationResponse(const UpdateOrganizationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOrganizationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOrganizationConfigurationResponse)
    Q_DISABLE_COPY(UpdateOrganizationConfigurationResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
