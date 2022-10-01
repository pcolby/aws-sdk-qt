// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETODATASETREQUEST_H
#define QTAWS_SUBSCRIBETODATASETREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class SubscribeToDatasetRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT SubscribeToDatasetRequest : public CognitoSyncRequest {

public:
    SubscribeToDatasetRequest(const SubscribeToDatasetRequest &other);
    SubscribeToDatasetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeToDatasetRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
