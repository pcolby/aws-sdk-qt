// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOWNLOADDEFAULTKEYPAIRREQUEST_H
#define QTAWS_DOWNLOADDEFAULTKEYPAIRREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DownloadDefaultKeyPairRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DownloadDefaultKeyPairRequest : public LightsailRequest {

public:
    DownloadDefaultKeyPairRequest(const DownloadDefaultKeyPairRequest &other);
    DownloadDefaultKeyPairRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DownloadDefaultKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
