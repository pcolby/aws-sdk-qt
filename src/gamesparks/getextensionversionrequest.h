// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONVERSIONREQUEST_H
#define QTAWS_GETEXTENSIONVERSIONREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class GetExtensionVersionRequestPrivate;

class QTAWSGAMESPARKS_EXPORT GetExtensionVersionRequest : public GameSparksRequest {

public:
    GetExtensionVersionRequest(const GetExtensionVersionRequest &other);
    GetExtensionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExtensionVersionRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
