// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMECONFIGURATIONREQUEST_H
#define QTAWS_UPDATEGAMECONFIGURATIONREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class UpdateGameConfigurationRequestPrivate;

class QTAWSGAMESPARKS_EXPORT UpdateGameConfigurationRequest : public GameSparksRequest {

public:
    UpdateGameConfigurationRequest(const UpdateGameConfigurationRequest &other);
    UpdateGameConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameConfigurationRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
