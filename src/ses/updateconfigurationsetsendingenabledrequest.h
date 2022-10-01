// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDREQUEST_H
#define QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetSendingEnabledRequestPrivate;

class QTAWSSES_EXPORT UpdateConfigurationSetSendingEnabledRequest : public SesRequest {

public:
    UpdateConfigurationSetSendingEnabledRequest(const UpdateConfigurationSetSendingEnabledRequest &other);
    UpdateConfigurationSetSendingEnabledRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetSendingEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
