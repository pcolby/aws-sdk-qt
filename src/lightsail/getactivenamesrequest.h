// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIVENAMESREQUEST_H
#define QTAWS_GETACTIVENAMESREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetActiveNamesRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetActiveNamesRequest : public LightsailRequest {

public:
    GetActiveNamesRequest(const GetActiveNamesRequest &other);
    GetActiveNamesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetActiveNamesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
