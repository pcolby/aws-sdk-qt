// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPANYNETWORKCONFIGURATIONREQUEST_H
#define QTAWS_UPDATECOMPANYNETWORKCONFIGURATIONREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateCompanyNetworkConfigurationRequestPrivate;

class QTAWSWORKLINK_EXPORT UpdateCompanyNetworkConfigurationRequest : public WorkLinkRequest {

public:
    UpdateCompanyNetworkConfigurationRequest(const UpdateCompanyNetworkConfigurationRequest &other);
    UpdateCompanyNetworkConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCompanyNetworkConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
