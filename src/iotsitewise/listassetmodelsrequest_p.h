// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETMODELSREQUEST_P_H
#define QTAWS_LISTASSETMODELSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "listassetmodelsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssetModelsRequest;

class ListAssetModelsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    ListAssetModelsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   ListAssetModelsRequest * const q);
    ListAssetModelsRequestPrivate(const ListAssetModelsRequestPrivate &other,
                                   ListAssetModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssetModelsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
