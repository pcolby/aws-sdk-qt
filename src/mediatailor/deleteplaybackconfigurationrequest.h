// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLAYBACKCONFIGURATIONREQUEST_H
#define QTAWS_DELETEPLAYBACKCONFIGURATIONREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeletePlaybackConfigurationRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT DeletePlaybackConfigurationRequest : public MediaTailorRequest {

public:
    DeletePlaybackConfigurationRequest(const DeletePlaybackConfigurationRequest &other);
    DeletePlaybackConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlaybackConfigurationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
