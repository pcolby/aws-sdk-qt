// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBASEDAUTOSCALINGREQUEST_H
#define QTAWS_SETLOADBASEDAUTOSCALINGREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class SetLoadBasedAutoScalingRequestPrivate;

class QTAWSOPSWORKS_EXPORT SetLoadBasedAutoScalingRequest : public OpsWorksRequest {

public:
    SetLoadBasedAutoScalingRequest(const SetLoadBasedAutoScalingRequest &other);
    SetLoadBasedAutoScalingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLoadBasedAutoScalingRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
