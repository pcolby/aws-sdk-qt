// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPANYNETWORKCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATECOMPANYNETWORKCONFIGURATIONRESPONSE_H

#include "worklinkresponse.h"
#include "updatecompanynetworkconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateCompanyNetworkConfigurationResponsePrivate;

class QTAWSWORKLINK_EXPORT UpdateCompanyNetworkConfigurationResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    UpdateCompanyNetworkConfigurationResponse(const UpdateCompanyNetworkConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCompanyNetworkConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCompanyNetworkConfigurationResponse)
    Q_DISABLE_COPY(UpdateCompanyNetworkConfigurationResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
