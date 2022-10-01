// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETTRACKINGOPTIONSREQUEST_H
#define QTAWS_UPDATECONFIGURATIONSETTRACKINGOPTIONSREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetTrackingOptionsRequestPrivate;

class QTAWSSES_EXPORT UpdateConfigurationSetTrackingOptionsRequest : public SesRequest {

public:
    UpdateConfigurationSetTrackingOptionsRequest(const UpdateConfigurationSetTrackingOptionsRequest &other);
    UpdateConfigurationSetTrackingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetTrackingOptionsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
