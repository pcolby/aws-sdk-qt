// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDASSETSREQUEST_H
#define QTAWS_LISTASSOCIATEDASSETSREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssociatedAssetsRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT ListAssociatedAssetsRequest : public IoTSiteWiseRequest {

public:
    ListAssociatedAssetsRequest(const ListAssociatedAssetsRequest &other);
    ListAssociatedAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
