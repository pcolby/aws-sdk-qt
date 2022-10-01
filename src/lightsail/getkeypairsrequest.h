// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPAIRSREQUEST_H
#define QTAWS_GETKEYPAIRSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetKeyPairsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetKeyPairsRequest : public LightsailRequest {

public:
    GetKeyPairsRequest(const GetKeyPairsRequest &other);
    GetKeyPairsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyPairsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
