// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETMODELSREQUEST_H
#define QTAWS_LISTASSETMODELSREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssetModelsRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT ListAssetModelsRequest : public IoTSiteWiseRequest {

public:
    ListAssetModelsRequest(const ListAssetModelsRequest &other);
    ListAssetModelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssetModelsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
