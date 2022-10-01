// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYBACKCONFIGURATIONREQUEST_H
#define QTAWS_GETPLAYBACKCONFIGURATIONREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class GetPlaybackConfigurationRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT GetPlaybackConfigurationRequest : public MediaTailorRequest {

public:
    GetPlaybackConfigurationRequest(const GetPlaybackConfigurationRequest &other);
    GetPlaybackConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlaybackConfigurationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
