// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSCALINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETEAUTOSCALINGCONFIGURATIONREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteAutoScalingConfigurationRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DeleteAutoScalingConfigurationRequest : public AppRunnerRequest {

public:
    DeleteAutoScalingConfigurationRequest(const DeleteAutoScalingConfigurationRequest &other);
    DeleteAutoScalingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAutoScalingConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
