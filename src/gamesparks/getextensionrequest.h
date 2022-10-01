// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONREQUEST_H
#define QTAWS_GETEXTENSIONREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class GetExtensionRequestPrivate;

class QTAWSGAMESPARKS_EXPORT GetExtensionRequest : public GameSparksRequest {

public:
    GetExtensionRequest(const GetExtensionRequest &other);
    GetExtensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExtensionRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
