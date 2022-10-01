// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHCONFIGURATIONTEMPLATEREQUEST_H
#define QTAWS_CREATELAUNCHCONFIGURATIONTEMPLATEREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class CreateLaunchConfigurationTemplateRequestPrivate;

class QTAWSMGN_EXPORT CreateLaunchConfigurationTemplateRequest : public MgnRequest {

public:
    CreateLaunchConfigurationTemplateRequest(const CreateLaunchConfigurationTemplateRequest &other);
    CreateLaunchConfigurationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
