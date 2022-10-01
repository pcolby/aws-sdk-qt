// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETREQUEST_H
#define QTAWS_UPDATEASSETREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class UpdateAssetRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT UpdateAssetRequest : public DataExchangeRequest {

public:
    UpdateAssetRequest(const UpdateAssetRequest &other);
    UpdateAssetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
