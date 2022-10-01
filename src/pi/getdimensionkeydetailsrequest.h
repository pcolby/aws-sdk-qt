// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIMENSIONKEYDETAILSREQUEST_H
#define QTAWS_GETDIMENSIONKEYDETAILSREQUEST_H

#include "pirequest.h"

namespace QtAws {
namespace Pi {

class GetDimensionKeyDetailsRequestPrivate;

class QTAWSPI_EXPORT GetDimensionKeyDetailsRequest : public PiRequest {

public:
    GetDimensionKeyDetailsRequest(const GetDimensionKeyDetailsRequest &other);
    GetDimensionKeyDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDimensionKeyDetailsRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
