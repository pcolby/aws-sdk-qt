// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTASSETSREQUEST_H
#define QTAWS_LISTPROJECTASSETSREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListProjectAssetsRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT ListProjectAssetsRequest : public IoTSiteWiseRequest {

public:
    ListProjectAssetsRequest(const ListProjectAssetsRequest &other);
    ListProjectAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProjectAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
