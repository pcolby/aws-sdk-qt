// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTGAMECONFIGURATIONREQUEST_H
#define QTAWS_IMPORTGAMECONFIGURATIONREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class ImportGameConfigurationRequestPrivate;

class QTAWSGAMESPARKS_EXPORT ImportGameConfigurationRequest : public GameSparksRequest {

public:
    ImportGameConfigurationRequest(const ImportGameConfigurationRequest &other);
    ImportGameConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportGameConfigurationRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
