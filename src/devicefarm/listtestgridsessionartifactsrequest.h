// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONARTIFACTSREQUEST_H
#define QTAWS_LISTTESTGRIDSESSIONARTIFACTSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionArtifactsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListTestGridSessionArtifactsRequest : public DeviceFarmRequest {

public:
    ListTestGridSessionArtifactsRequest(const ListTestGridSessionArtifactsRequest &other);
    ListTestGridSessionArtifactsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestGridSessionArtifactsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
