// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPLAYBACKCONFIGURATIONREQUEST_H
#define QTAWS_PUTPLAYBACKCONFIGURATIONREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class PutPlaybackConfigurationRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT PutPlaybackConfigurationRequest : public MediaTailorRequest {

public:
    PutPlaybackConfigurationRequest(const PutPlaybackConfigurationRequest &other);
    PutPlaybackConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPlaybackConfigurationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
