// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELREQUEST_H
#define QTAWS_GETCHANNELREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class GetChannelRequestPrivate;

class QTAWSIVS_EXPORT GetChannelRequest : public IvsRequest {

public:
    GetChannelRequest(const GetChannelRequest &other);
    GetChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
