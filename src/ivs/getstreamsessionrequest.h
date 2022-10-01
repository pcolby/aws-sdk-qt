// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMSESSIONREQUEST_H
#define QTAWS_GETSTREAMSESSIONREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class GetStreamSessionRequestPrivate;

class QTAWSIVS_EXPORT GetStreamSessionRequest : public IvsRequest {

public:
    GetStreamSessionRequest(const GetStreamSessionRequest &other);
    GetStreamSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamSessionRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
